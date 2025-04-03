import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
import math

class SquareController(Node): 
    def __init__(self):
        super().__init__('square_controller')
        
        # Publisher for cmd_vel (to control the turtle)
        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        
        # Subscription to turtle1's position (pose)
        self.subscription_pos = self.create_subscription(Pose, '/turtle1/pose', self.pose_callback, 10)
        
        # Timer setup (0.1 seconds period for regular updates)
        self.timer_period = 0.1
        self.timer = self.create_timer(self.timer_period, self.timer_callback)

        # Variables to control the movement
        self.side_length = 2.0  # Length of each side of the square
        self.target_angle = math.radians(90)  # 90 degrees in radians for a square turn
        self.angle_tolerance = 0.05  # Small tolerance to stop rotation
        self.distance_covered = 0.0  # Track the distance the turtle has moved
        self.is_rotating = False  # Flag to indicate if the turtle is rotating
        self.is_moving = False  # Flag to indicate if the turtle is moving straight

        # To track the turtle's current position
        self.current_pose = None

    def pose_callback(self, msg):
        """Callback function to receive the turtle's position."""
        self.current_pose = msg

    def timer_callback(self): 
        """Function that runs every 0.1 seconds to control the turtle."""
        
        if not self.current_pose:
            return  # Wait until we have the first pose update
        
        vel = Twist()

        if self.is_moving:
            # Move the turtle forward
            vel.linear.x = 2.0  # Move forward with a velocity of 2.0 m/s
            vel.angular.z = 0.0  # No rotation while moving forward
            self.publisher_.publish(vel)

            # Update the distance the turtle has moved
            self.distance_covered += vel.linear.x * self.timer_period

            # Check if the turtle has covered the distance for one side of the square
            if self.distance_covered >= self.side_length:
                self.is_moving = False  # Stop moving
                self.is_rotating = True  # Start rotating
                self.distance_covered = 0.0  # Reset the distance

        elif self.is_rotating:
            # Rotate the turtle 90 degrees
            vel.linear.x = 0.0  # No forward movement
            vel.angular.z = 1.0  # Rotate at 1 radian per second
            self.publisher_.publish(vel)

            # Check if the turtle has rotated enough (90 degrees)
            if abs(self.current_pose.theta % (2 * math.pi) - self.target_angle) < self.angle_tolerance:
                self.is_rotating = False  # Stop rotating
                self.is_moving = True  # Start moving forward again

        else:
            # If not moving or rotating, keep sending zero velocity
            vel.linear.x = 0.0
            vel.angular.z = 0.0
            self.publisher_.publish(vel)

def main(args=None):
    rclpy.init(args=args)
    node = SquareController()

    try:
        rclpy.spin(node)  # Keep the node running
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

