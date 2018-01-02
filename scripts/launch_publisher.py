#!/usr/bin/env python
# license removed for brevity
import rospy
from learning_rosdoc_simple_publisher.talker import talker

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass
