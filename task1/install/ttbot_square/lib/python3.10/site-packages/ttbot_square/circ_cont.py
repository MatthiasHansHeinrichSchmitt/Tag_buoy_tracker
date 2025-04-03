import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from p_interfaces.srv import ChangeRadius

class CircleController(Node):
    def __init__(self):
        super().__init__('circle_controller')
        
        # Publisher for cmd_vel (to control the turtle)
        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        
        # Timer to call the timer_callback function periodically
        self.timer_period = 0.1  # seconds
        self.timer = self.create_timer(self.timer_period, self.timer_callback)

        
        # Set the linear and angular velocities to create circular motion
        self.linear_velocity = 2.0  # Linear velocity in m/s
        self.angular_velocity = 1.0  # Angular velocity in rad/s
        
        self.srv=self.create_service(ChangeRadius,"change_radius", self.change_radius_callback)

    def timer_callback(self):
        # Create a new Twist message
        vel = Twist()

        # Set linear and angular velocities for circular motion
        vel.linear.x = self.linear_velocity  # Move forward with this speed
        vel.angular.z = self.angular_velocity  # Turn with this speed

        # Publish the velocity message
        self.publisher_.publish(vel)

        # Log the velocities
        self.get_logger().info(f"Publishing velocity: linear.x = {vel.linear.x}, angular.z = {vel.angular.z}")
    def change_radius_callback(self,request,response):
        return response
def main(args=None):
    rclpy.init(args=args)

    # Create the CircleController node
    node = CircleController()

    try:
        rclpy.spin(node)  # Keep the node running
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
