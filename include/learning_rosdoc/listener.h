/** \file
 *  \brief Header file for listener.cpp
 *
 *  Contains declaration of my_ns namespace. Include-guarded of cource.
*/

#ifndef LISTENER_H
#define LISTENER_H

namespace my_ns {
    void chatterCallback(const learning_rosdoc::MyString::ConstPtr& msg);
}

#endif
