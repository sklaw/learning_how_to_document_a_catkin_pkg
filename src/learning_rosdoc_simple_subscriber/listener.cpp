/** \file
 *  \brief Implement a roscpp node that subscribes chatter topic.
 *
 *  The purpose of this file is for learning how to document in
 *  cpp using doxygen, so the implementation is extremely simple.
*/

#include "ros/ros.h"
#include "std_msgs/String.h"
#include "learning_rosdoc/MyString.h"

/** \breif A callback function for chatter topic.
 *
 *  A Callback function that prints the content of
 *  learning_rosdoc::MyString received via chatter
 *  topic. The printing is implemented by ROS_INFO
 *  instead of printf or cout.
*/
void chatterCallback(
    const learning_rosdoc::MyString::ConstPtr& msg /**< [in] received message instance. */
)
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
