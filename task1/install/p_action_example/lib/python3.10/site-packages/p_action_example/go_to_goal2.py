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
        super().__init__('go_to_goal')
        self.publisher_ = self.create_publisher(Twist, 'turtle1/cmd_vel', 10)
        self.subscription = self.create_subscription(
            Pose,
            'turtle1/pose',
            self.pose_listener_callback,
            10
        )
        self.current_pose = Pose()
        self.goal_reached = False  # Initially set to False
        self.goal_x = 5.0
        self.goal_y = 5.0
        self.EPSILON_ERROR = 0.1
        self.velocity = Twist()

        self.action_server = ActionServer(
            self,
            GoToPoint,
            'go_to_point',  # The name of the action
            self.action_callback  # The callback method to handle requests
        )
        self.get_logger().info("Action server for 'go_to_point' initialized")

    def action_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
        
        # Get the goal from the request
        goal_x = goal_handle.request.x
        goal_y = goal_handle.request.y
        
        feedback_msg = GoToPoint.Feedback()
        feedback_msg.pose = self.current_pose  # Update feedback based on current pose
        
        # Set goal_reached to False to enter the loop
        self.goal_reached = False

        # Loop to check if goal is reached
        while not self.goal_reached:
            diff_x = abs(self.current_pose.x - goal_x)
            diff_y = abs(self.current_pose.y - goal_y)

            if diff_x < self.EPSILON_ERROR and diff_y < self.EPSILON_ERROR:
                self.goal_reached = True  # Goal reached
                goal_handle.succeed()  # Mark goal as succeeded when reached
                result = GoToPoint.Result()
                result.success = True
                return result

            goal_handle.publish_feedback(feedback_msg)  # Send feedback

            # Sleep to avoid spamming the action server
            time.sleep(1)

        # Return the result after the goal is achieved
        result = GoToPoint.Result()
        result.success = self.goal_reached
        goal_handle.succeed()
        return result

    def pose_listener_callback(self, msg):
        self.current_pose = msg
        diff_x = abs(self.current_pose.x - self.goal_x)
        diff_y = abs(self.current_pose.y - self.goal_y)

        angle = math.atan2(self.goal_y - self.current_pose.y, self.goal_x - self.current_pose.x)
        delta = angle - self.current_pose.theta

        distance = math.sqrt(diff_x ** 2 + diff_y ** 2)

        if diff_x < self.EPSILON_ERROR and diff_y < self.EPSILON_ERROR:
            self.velocity.angular.z = 0.0
            self.velocity.linear.x = 0.0
            self.get_logger().info("Goal Reached!")
        elif delta < -0.02 or delta > 0.02:
            self.velocity.angular.z = delta * 0.5
            self.get_logger().info(f"Turning: {delta}")
        else:
            self.velocity.angular.z = 0.0
            self.velocity.linear.x = distance * 0.5
            self.get_logger().info(f"Moving towards goal, Distance: {distance}")

        self.publisher_.publish(self.velocity)

def main(args=None):
    rclpy.init(args=args)
    go_to_goal = GoToGoal()
    rclpy.spin(go_to_goal)
    go_to_goal.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
