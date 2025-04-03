from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from p_action_interfaces.action import GoToPoint
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
import math
import time


class GoToGoal(Node):
    def __init__(self):
        # Initialize the node with the name "go_to_goal"
        super().__init__("go_to_goal")

        # Create a publisher to send velocity commands to the robot
        self.publisher_ = self.create_publisher(Twist, "turtle1/cmd_vel", 10)

        # Create a callback group for mutually exclusive callback execution
        velocity_callback_group = MutuallyExclusiveCallbackGroup()

        # Subscription to listen to the robot's current pose
        self.subscription = self.create_subscription(
            Pose,
            "turtle1/pose",  # Topic to subscribe to
            self.pose_listener_callback,  # Callback to handle received pose data
            10,  # Queue size
            callback_group=velocity_callback_group,  # Grouping callbacks
        )

        # Create a callback group for the action server
        action_callback_group = MutuallyExclusiveCallbackGroup()

        # Set up an action server to handle goal requests for the turtle's movement
        self.action_server = ActionServer(
            self,
            GoToPoint,  # Action type (goal and result handling)
            "go_to_point",  # Action name (used to send goals from clients)
            self.action_callback,  # Callback to process goal requests
            callback_group=action_callback_group,  # Grouping callbacks
        )

        # Initialize variables for robot's current state and goal
        self.current_pose = Pose()  # Store current position and orientation
        self.goal_reached = True  # Initially, the goal is considered reached
        self.velocity = Twist()  # The robot's velocity (0 by default)
        self.goal_x = 0.0  # X coordinate of the goal
        self.goal_y = 0.0  # Y coordinate of the goal
        self.EPSILON_ERROR = 0.1  # Error threshold for goal proximity

def action_callback(self, goal_handle):
    # Log the start of goal execution
    self.get_logger().info('Executing goal...')
    
    # If the previous goal hasn't been reached, we ignore the new one or handle it
    if not self.goal_reached:
        self.get_logger().warn('Got new goal before the old one was reached.')
        # Optionally reject new goal requests here or handle appropriately
        # Return failure result for the new goal request
        result = GoToPoint.Result()
        result.success = False
        goal_handle.abort(result)
        return result

    # Set the new goal coordinates
    self.goal_x = goal_handle.request.x
    self.goal_y = goal_handle.request.y
    
    # Initialize feedback message
    feedback_msg = GoToPoint.Feedback()
    feedback_msg.pose = self.current_pose

    # While the goal is not reached, continue sending feedback and checking distance
    diff_x = abs(self.current_pose.x - self.goal_x)
    diff_y = abs(self.current_pose.y - self.goal_y)

    while diff_x > self.EPSILON_ERROR or diff_y > self.EPSILON_ERROR:
        # Send feedback to the client
        self.get_logger().info(f'Sending feedback: {feedback_msg.pose}')
        goal_handle.publish_feedback(feedback_msg)

        # Update the current pose in the feedback message
        feedback_msg.pose = self.current_pose
        
        # Recalculate the remaining distance to the goal
        diff_x = abs(self.current_pose.x - self.goal_x)
        diff_y = abs(self.current_pose.y - self.goal_y)
        
        # Sleep for a short time to let the robot move
        time.sleep(1)  # Adjust the sleep duration for feedback frequency
    
    # Goal is reached, mark the action as successful
    goal_handle.succeed()

    # Create result message to indicate success
    result = GoToPoint.Result()
    result.success = True
    
    # Mark that the goal has been reached
    self.goal_reached = True
    
    # Return result to complete the action
    return result

def pose_listener_callback(self, msg):
    # Update the current pose with the latest message
    self.current_pose = msg
    
    # Initialize variables for angle and delta
    angle = 0.0
    delta = 0.0

    # Calculate the difference in x and y between current pose and goal
    diff_x = abs(self.current_pose.x - self.goal_x)
    diff_y = abs(self.current_pose.y - self.goal_y)

    # Calculate the angle to the goal
    angle = math.atan2(self.goal_y - self.current_pose.y, self.goal_x - self.current_pose.x)

    # Calculate the difference between the current orientation and the goal's direction
    delta = angle - self.current_pose.theta
    
    # Ensure the angle difference is within [-pi, pi] for smooth turning
    delta = math.atan2(math.sin(delta), math.cos(delta))

    # Initialize linear velocity as 0.0, as we need to rotate first
    self.velocity.linear.x = 0.0

    # Calculate the distance to the goal using Euclidean distance
    distance = math.sqrt(diff_x * diff_x + diff_y * diff_y)

    # If the robot is within epsilon error of the goal, stop
    if diff_x < self.EPSILON_ERROR and diff_y < self.EPSILON_ERROR:
        self.velocity.angular.z = 0.0
    # If the robot is not aligned with the goal, rotate to face it
    elif delta < -0.02 or delta > 0.02:
        self.velocity.angular.z = delta * 0.5
    else:
        # If aligned, move towards the goal with a velocity proportional to distance
        self.velocity.angular.z = 0.0
        self.velocity.linear.x = distance * 0.5  # Adjust this for better speed control

    # Only publish velocity if there’s a non-zero velocity command
    if self.velocity.linear.x != 0.0 or self.velocity.angular.z != 0.0:
        self.publisher_.publish(self.velocity)


def main(args=None):
    import rclpy
    from rclpy.executors import MultiThreadedExecutor
   
    # Initialize the ROS 2 client library
    rclpy.init(args=args)

    # Create an instance of the GoToGoal node
    go_to_goal = GoToGoal()

    # Create a MultiThreadedExecutor to handle concurrent callbacks
    executor = MultiThreadedExecutor()

    # Add the GoToGoal node to the executor
    executor.add_node(go_to_goal)

    try:
        # Start spinning the executor to process callbacks
        executor.spin()
    except KeyboardInterrupt:
        # If interrupted (e.g., Ctrl+C), gracefully shut down the node
        pass
    finally:
        # Destroy the node and shut down the ROS 2 client
        go_to_goal.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
