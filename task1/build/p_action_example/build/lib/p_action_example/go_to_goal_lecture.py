import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
from p_action_interfaces.action import GoToPoint
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from rclpy.executors import MultiThreadedExecutor
import math


class GoToGoal(Node):
    def __init__(self):
        super().__init__("go_to_goal")

        # Publisher for the velocity command
        self.publisher_ = self.create_publisher(Twist, "turtle1/cmd_vel", 10)

        # Callback group for pose subscription
        velocity_callback_group = MutuallyExclusiveCallbackGroup()

        # Pose subscription
        self.subscription = self.create_subscription(
            Pose,
            "turtle1/pose",
            self.pose_listener_callback,
            10,
            callback_group=velocity_callback_group,
        )

        # Callback group for action server
        action_callback_group = MutuallyExclusiveCallbackGroup()

        # Action server for goal movement
        self.action_server = ActionServer(
            self,
            GoToPoint,
            "go_to_point",
            self.action_callback,
            callback_group=action_callback_group,
        )

        # Initialize robot state variables
        self.current_pose = Pose()
        self.goal_reached = True
        self.velocity = Twist()
        self.goal_x = 0.0
        self.goal_y = 0.0
        self.EPSILON_ERROR = 0.1

    def action_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
        
        # Check if there is an existing goal that has not been reached
        if not self.goal_reached:
            print('Got new goal before old one reached')
            # Optionally, reject the new goal or reset state
            # self.goal_reached = True  # reset previous goal if needed
            return GoToPoint.Result(success=False)  # early return if necessary
        
        # Set the new goal
        self.goal_x = goal_handle.request.x
        self.goal_y = goal_handle.request.y
        feedback_msg = GoToPoint.Feedback()
        feedback_msg.pose = self.current_pose
        self.get_logger().info(f"Initial Pose: x={self.current_pose.x}, y={self.current_pose.y}")
        self.get_logger().info(f"Goal: x={self.goal_x}, y={self.goal_y}")

        # While the goal is not reached, send feedback to the client
        diff_x = abs(self.current_pose.x - self.goal_x)
        diff_y = abs(self.current_pose.y - self.goal_y)
        
        while diff_x > self.EPSILON_ERROR or diff_y > self.EPSILON_ERROR:
            print('Sending feedback...')
            goal_handle.publish_feedback(feedback_msg)
            
            # Update the feedback message
            feedback_msg.pose = self.current_pose
            
            # Recalculate the distance to the goal
            diff_x = abs(self.current_pose.x - self.goal_x)
            diff_y = abs(self.current_pose.y - self.goal_y)
            
            # Optionally, replace time.sleep with a better non-blocking method like a timer
            # time.sleep(1)  # this could be blocking, depending on your system architecture
            
        # Goal reached successfully
        goal_handle.succeed()
        result = GoToPoint.Result()
        result.success = True
        self.goal_reached = True
        return result


    

    def pose_listener_callback(self, msg):
        self.current_pose = msg
        angle = 0.0
        delta = 0.0

        # Calculate the differences in x and y coordinates
        diff_x = abs(self.current_pose.x - self.goal_x)
        diff_y = abs(self.current_pose.y - self.goal_y)

        # Calculate the angle between the current pose and the goal pose
        angle = math.atan2(self.goal_y - self.current_pose.y, self.goal_x - self.current_pose.x)

        # Calculate the angular difference (delta) to turn the robot towards the goal
        delta = angle - self.current_pose.theta

        # Initialize linear velocity to zero
        self.velocity.linear.x = 0.0

        # Calculate the distance to the goal
        distance = math.sqrt(diff_x * diff_x + diff_y * diff_y)

        # If the robot is within an acceptable distance of the goal, stop moving
        if diff_x < self.EPSILON_ERROR and diff_y < self.EPSILON_ERROR:
            self.velocity.angular.z = 0.0
        elif delta < -0.02 or delta > 0.02:
            # Adjust angular velocity based on the angle difference
            self.velocity.angular.z = delta * 0.5
        else:
            # If the robot is roughly aligned, stop rotating
            self.velocity.angular.z = 0.0

        # Set linear velocity based on the distance to the goal
        self.velocity.linear.x = distance * 0.5

        # If there's a change in velocity, publish the updated velocity
        if self.velocity.linear.x != 0.0 or self.velocity.angular.z != 0.0:
            self.publisher_.publish(self.velocity)


            # Publish velocity command if there's any change
            if self.velocity.linear.x != 0.0 or self.velocity.angular.z != 0.0:
                self.publisher_.publish(self.velocity)

def main(args=None):
    rclpy.init(args=args)
    
    go_to_goal = GoToGoal()  # Create an instance of the GoToGoal class

    # Using a multi-threaded executor to handle action server callbacks
    executor = MultiThreadedExecutor()  
    executor.add_node(go_to_goal)

    # Spinning the node so it can process requests and perform actions
    executor.spin()

    # Clean up after exiting the spin
    go_to_goal.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
