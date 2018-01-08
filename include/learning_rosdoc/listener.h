/** \file
 *  \brief Header file for listener.cpp
 *
 *  Contains declaration of my_cpp_ns namespace. Include-guarded of cource.
*/

#ifndef LISTENER_H
#define LISTENER_H

/**
 *  \brief This is my namespace.
 *
 *  That's all. No more detail.
*/
namespace my_cpp_ns {
    /** 
     *  \brief A callback function for chatter topic that prints the
     *  \param[in] msg received message instance.
     *  \return void 
    */
    void chatterCallback(const learning_rosdoc::MyString::ConstPtr& msg);


    /// @brief This method adds two integers.
    /// @param a First integer to add.
    /// @param b Second integer to add.
    /// @return The sum of both parameters.
    int add(int a, int b);
}




#endif
