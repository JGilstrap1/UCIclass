//**********************************************************************************************************************************
///
/// Name: James Gilstrap
/// Course: I&C SCI_X471.1: Introduction to Computer Programming Using C++ (FALL 2018/REG 00336/SEC 1)
/// Instructor: Jack Lewin
/// Assignment: Assignment 3
/// Files: main.cpp, Assignment_3.cpp, Assignment_3.h, Makefile
///
//**********************************************************************************************************************************
#include <iostream>
#include <string>


#ifndef AgeDifference_H
#define AgeDifference_H

class AgeDifference {

    public:
        AgeDifference();
        std::string GetUserName();
        int GetUserAge();
        void CalculateAgeDifference(std::string userOne, int userOneAge, std::string userTwo, int userTwoAge);

    private:
        std::string userFirstName;
        int userAge;

};
#endif
