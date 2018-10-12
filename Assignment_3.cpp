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
#include <cmath>
#include "Assignment_3.h"

AgeDifference::AgeDifference() {
    std::cout << "This Program calculates the age difference between two people." << std::endl;
}

std::string AgeDifference::GetUserName() {
    std::getline(std::cin,userFirstName);
    return userFirstName;
}

int AgeDifference::GetUserAge() {
    std::cin >> userAge;
    return userAge;
}

void AgeDifference::CalculateAgeDifference(std::string userOneName, int userOneAge, std::string userTwoName, int userTwoAge) {

    int AgeDifference = userOneAge - userTwoAge;

    if (AgeDifference > 0) {

        if (abs(AgeDifference) == 1) {
            std::cout << "Result: " << userOneName << " is " << abs(AgeDifference) << " year older than "
                                                                                            << userTwoName <<"." << std::endl;
        }
        else {
            std::cout << "Result: " << userOneName << " is " << abs(AgeDifference) << " years older than "
                                                                                            << userTwoName <<"." << std::endl;
        }
    }

    else if (AgeDifference < 0) {

        if (abs(AgeDifference) == 1) {
            std::cout << "Result: " << userTwoName << " is " << abs(AgeDifference) << " year older than "
                                                                                            << userOneName <<"." << std::endl;
        }
        else {
            std::cout << "Result: " << userTwoName << " is " << abs(AgeDifference) << " years older than "
                                                                                            << userOneName << "." << std::endl;
        }
    }

    else {
        std::cout << "Result: " << userOneName << " and " << userTwoName << " are the same age.";
    }
}