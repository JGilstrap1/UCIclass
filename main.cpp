//**********************************************************************************************************************************
///
/// Name: James Gilstrap
/// Course: I&C SCI_X471.1: Introduction to Computer Programming Using C++ (FALL 2018/REG 00336/SEC 1)
/// Instructor: Jack Lewin
/// Assignment: Assignment 6
/// Files: main.cpp, Assignment_6.cpp, Assignment_6.h, Makefile
///
//**********************************************************************************************************************************

#include <iostream>
#include <string>
#include "Assignment_6.h"

int main () {

    number numObj;
    hexidecimal hexObj;
    binary binObj;

    number* hexPtr = &hexObj;
    number* binPtr = &binObj;

    numObj.getUserInput();
    hexPtr->print_it();
    binPtr->print_it();


}
