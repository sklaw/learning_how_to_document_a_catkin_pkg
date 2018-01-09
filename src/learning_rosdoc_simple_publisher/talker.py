import rospy
from std_msgs.msg import String
from learning_rosdoc.msg import MyString

def talker(boring_arg=None):
    """ Publishes messages to chatter topic

    This function assembles hello world string with timestamp
    and then publishes it to chatter topic in 10hz rate. It 
    returns when rospy.is_shutdown() returns false.

    Args:
        boring_arg: A boring, meaningless argument.

    Returns:
        None.

    Raises:
        rospy.exceptions.ROSException: If the user has not 
            initialized a ROS node, this exception will be
            thrown.
    """
    pub = rospy.Publisher('chatter', MyString, queue_size=10)
    rospy.init_node('talker', anonymous=True)
    rate = rospy.Rate(10) 
    while not rospy.is_shutdown():
        hello_str = "hello world %s" % rospy.get_time()
        rospy.loginfo(hello_str)

        m = MyString()
        m.std_str.data = hello_str
        pub.publish(m)
        rate.sleep()
