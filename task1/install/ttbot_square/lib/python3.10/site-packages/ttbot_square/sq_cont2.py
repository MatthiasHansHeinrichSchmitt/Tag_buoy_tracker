import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import time

class TurtleController(Node):
    def __init__(self):
        super().__init__('turtle_controller')
        self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        time.sleep(2)  # Allow some time for nodes to initialize

    def move_straight(self, distance, speed):
        """
        Move the turtle in a straight line.
        :param distance: Distance to move (meters)
        :param speed: Speed of the turtle (m/s)
        """
        velocity = Twist()
        velocity.linear.x = speed
        duration = distance / speed
        start_time = time.time()
        
        while time.time() - start_time < duration:
            self.publisher.publish(velocity)
            time.sleep(0.1)
        
        # Stop the turtle after moving the required distance
        velocity.linear.x = 0.0
        self.publisher.publish(velocity)

    def turn(self, angle, angular_speed):
        """
        Turn the turtle in place.
        :param angle: Angle to turn (radians)
        :param angular_speed: Angular speed (rad/s)
        """
        velocity = Twist()
        velocity.angular.z = angular_speed
        duration = abs(angle / angular_speed)
        start_time = time.time()
        
        while time.time() - start_time < duration:
            self.publisher.publish(velocity)
            time.sleep(0.1)
        
        # Stop the turtle after completing the turn
        velocity.angular.z = 0.0
        self.publisher.publish(velocity)

def main():
    rclpy.init()
    controller = TurtleController()
    
    try:
        # Move straight for 2 meters
        controller.move_straight(distance=2.0, speed=0.5)
        # Turn 90 degrees (pi/2 radians) counter-clockwise
        controller.turn(angle=1.57, angular_speed=0.5)
        # Move straight for another 2 meters
        controller.move_straight(distance=2.0, speed=0.5)
    finally:
        controller.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
