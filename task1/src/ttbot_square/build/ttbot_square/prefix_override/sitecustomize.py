import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/hans/ros2/task1/src/ttbot_square/install/ttbot_square'
