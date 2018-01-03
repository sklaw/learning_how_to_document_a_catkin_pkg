/** \file
 *  \brief Implement a roscpp node that subscribes chatter topic.
 *
 *  The purpose of this file is for learning how to document in
 *  cpp using doxygen, so the implementation is extremely simple.
*/

#include "ros/ros.h"
#include "std_msgs/String.h"
#include "learning_rosdoc/MyString.h"
#include "learning_rosdoc/listener.h"

/** 
 *  NOTE: The printing is implemented by ROS_INFO instead of printf or cout.
*/
void my_ns::chatterCallback(const learning_rosdoc::MyString::ConstPtr& msg) {
  ROS_INFO("I heard: [%s]", msg->std_str.data.c_str());
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener");

  ros::NodeHandle n;

  ros::Subscriber sub = n.subscribe("chatter", 1000, my_ns::chatterCallback);

  ros::spin();

  return 0;
}
