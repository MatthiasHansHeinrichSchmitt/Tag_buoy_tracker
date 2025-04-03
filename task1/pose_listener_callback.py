def pose_listener_callback(self,msg):
    self.current_pose=msg
    angle = 0.0
    delta=0.0

    diff_x=abs(self.current_pose.x-self.goal_x)
    diff_y=abs(self.current_pose.y-self.goal_y)

    angle = math.atan2(elf.goal_y-self.current_pose.y)


    .....

    def main(args=None):
        rcply