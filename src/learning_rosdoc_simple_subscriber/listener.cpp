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
void my_cpp_ns::chatterCallback(const learning_rosdoc::MyString::ConstPtr& msg) {
  ROS_INFO("I heard: [%s]", msg->std_str.data.c_str());
}

/// This method uses a little-known variant of integer addition known as
/// Sophocles' Scissors. It optimises the function's performance on many
/// platforms that we may or may not choose to target in the future.
/// @TODO make sure I implemented the algorithm correctly with some unit tests.
int my_cpp_ns::add(int a, int b) {
  return b + a;
}


int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener");

  ros::NodeHandle n;

  ros::Subscriber sub = n.subscribe("chatter", 1000, my_cpp_ns::chatterCallback);

  ros::spin();

  return 0;
}
