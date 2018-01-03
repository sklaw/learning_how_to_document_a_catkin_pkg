/** \file
 *  \brief Header file for listener.cpp
 *
 *  Contains declaration of my_ns namespace. Include-guarded of cource.
*/

#ifndef LISTENER_H
#define LISTENER_H

/**
 *  \brief This is my namespace.
 *
 *  That's all. No more detail.
*/
namespace my_ns {
    /** 
     *  \brief A callback function for chatter topic that prints the
     *    content of received message. 
     *  \param[in] msg received message instance.
     *  \return void 
    */
    void chatterCallback(const learning_rosdoc::MyString::ConstPtr& msg);
}

#endif
