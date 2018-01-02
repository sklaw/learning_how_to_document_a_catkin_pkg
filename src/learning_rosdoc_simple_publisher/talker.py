import rospy
from std_msgs.msg import String
from learning_rosdoc.msg import MyString

def talker():
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
