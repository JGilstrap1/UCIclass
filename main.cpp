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
#include "Assignment_3.h"

typedef unsigned short int USHORT;

int main () {
    std::string userOneName = "";
    std::string userTwoName = "";
    USHORT userOneAge = 0;
    USHORT userTwoAge = 0;

    AgeDifference AgeDifObj;

    //get user 1 data
    std::cout << "What is the name of the first person?" << std::endl;
    userOneName = AgeDifObj.GetUserName();
    std::cout << "How old is " << userOneName << "?" << std::endl;
    userOneAge = AgeDifObj.GetUserAge();

    //get user 2 data
    std::cout << "What is the name of the second person?" << std::endl;
    std::cin.ignore();
    userTwoName = AgeDifObj.GetUserName();
    std::cout << "How old is " << userTwoName << "?" << std::endl;
    userTwoAge = AgeDifObj.GetUserAge();

    AgeDifObj.CalculateAgeDifference(userOneName,userOneAge,userTwoName,userTwoAge);

    return 0;

}
