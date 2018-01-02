#include "ros/ros.h"
#include "std_msgs/String.h"
#include "learning_rosdoc/MyString.h"

void chatterCallback(const learning_rosdoc::MyString::ConstPtr& msg)
{
  ROS_INFO("I heard: [%s]", msg->std_str.data.c_str());
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener");

  ros::NodeHandle n;

  ros::Subscriber sub = n.subscribe("chatter", 1000, chatterCallback);

  ros::spin();

  return 0;
}
