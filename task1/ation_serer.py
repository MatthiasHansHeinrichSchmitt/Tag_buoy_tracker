class GoToGoal(Node):
    def __init__(self):
        super().__init__('go_to_goal')

        self.publisher_ = self.create_publisher(Twist, 'turtle1/cmd_vel',10)
        velocity_callback_group=MutuallyExclusieCallbackGroup()
        self.subscription = self.create_subscription(
            Pose,
            'turtle1/pose',
            self.pose_listener_callback,
            10,
            callback_group=velocity_callback_group
        )

        action_callback_group = MutuallyExclusieCallbackGroup()

        # while the goal i not reached, send feedback to the client
        diff_x=
        diff_y=
        