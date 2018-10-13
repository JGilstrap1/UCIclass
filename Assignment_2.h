//**********************************************************************************************************************************
///
/// Name: James Gilstrap
/// Course: I&C SCI_X471.1: Introduction to Computer Programming Using C++ (FALL 2018/REG 00336/SEC 1)
/// Instructor: Jack Lewin
/// Assignment: Assignment 2
/// Files: main.cpp, Assignment_2.cpp, Assignment_2.h, Makefile
///
//**********************************************************************************************************************************
#include <iostream>
#include <string>

using namespace std;

#ifndef Introduction_H
#define Introduction_H

class Introduction {

    public:
        string GetUserFirstName();
        string GetUserLastName();
        int GetUserBirthYear();

    private:
        string firstNameInput;
        string lastNameInput;
        int birthYearInput;
};
#endif
