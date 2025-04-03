import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
import math


class TurtleSquareDrawer(Node):
    def __init__(self):
        super().__init__('turtle_square_drawer')

        # Publisher for velocity commands
        self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)

        # Subscriber for turtle pose
        self.subscription = self.create_subscription(
            Pose, '/turtle1/pose', self.pose_callback, 10
        )

        # Initialize variables
        self.current_pose = None
        self.goal_index = 0
        self.goals = [
            (5.5, 5.5),
            (7.5, 5.5),
            (7.5, 7.5),
            (5.5, 7.5),  # Square 1
            (5.5, 5.5),
            (5.5, 3.5),
            (7.5, 3.5),
            (7.5, 5.5),  # Square 2
            (5.5, 5.5),
            (3.5, 5.5),
            (3.5, 3.5),
            (5.5, 3.5),  # Square 3
            (5.5, 5.5),
            (3.5, 5.5),
            (3.5, 7.5),
            (5.5, 7.5),  # Square 4
        ]
        self.moving = False  # Flag to indicate if the turtle is moving

        # Timer to check and send velocity commands
        self.timer = self.create_timer(0.1, self.control_loop)

    def pose_callback(self, msg):
        """Callback to update the turtle's current pose."""
        self.current_pose = msg

    def control_loop(self):
        """Control loop to move the turtle to its goals."""
        if self.current_pose is None:
            return

        # Check if all goals are completed
        if self.goal_index >= len(self.goals):
            self.get_logger().info("All goals completed. Stopping turtle.")
            self.stop_turtle()
            rclpy.shutdown()
            return

        # Get the current goal
        goal_x, goal_y = self.goals[self.goal_index]

        # Calculate distance and angle to the goal
        distance = math.sqrt(
            (goal_x - self.current_pose.x)**2 + (goal_y - self.current_pose.y)**2
        )
        angle_to_goal = math.atan2(goal_y - self.current_pose.y, goal_x - self.current_pose.x)

        # Calculate angular difference
        angular_difference = angle_to_goal - self.current_pose.theta
        angular_difference = math.atan2(math.sin(angular_difference), math.cos(angular_difference))

        # Create a Twist message for velocity commands
        vel_msg = Twist()

        # If the turtle is not facing the goal, rotate with precision
        if abs(angular_difference) > 0.01:  # smaller threshold for rotation
            vel_msg.angular.z = 1.5 * angular_difference  # slower rotation
        elif distance > 0.05:  # smaller threshold for movement
            # If the turtle is facing the goal, move forward slowly
            vel_msg.linear.x = 0.5 * distance  # slower forward speed
        else:
            # If the turtle reaches the goal, move to the next one
            self.get_logger().info(f"Goal reached: ({goal_x}, {goal_y})")
            self.goal_index += 1

        # Publish the velocity command
        self.publisher.publish(vel_msg)

    def stop_turtle(self):
        """Stop the turtle by publishing zero velocity."""
        vel_msg = Twist()
        vel_msg.linear.x = 0.0
        vel_msg.angular.z = 0.0
        self.publisher.publish(vel_msg)


def main(args=None):
    rclpy.init(args=args)

    # Create and run the node
    turtle_square_drawer = TurtleSquareDrawer()
    rclpy.spin(turtle_square_drawer)

    # Cleanup
    turtle_square_drawer.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
