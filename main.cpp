//**********************************************************************************************************************************
///
/// Name: James Gilstrap
/// Course: I&C SCI_X471.1: Introduction to Computer Programming Using C++ (FALL 2018/REG 00336/SEC 1)
/// Instructor: Jack Lewin
/// Assignment: Assignment 8
/// Files: main.cpp, Assignment_8.cpp, Assignment_8.h
///
//**********************************************************************************************************************************

#include <iostream>
#include <string>
#include "Assignment_8.h"

using namespace std;

int main () {

    myStack stackObj;

    myStack* stackPtr = &stackObj;

    int integer = 5;
    double doublenum = 2.2;
    string str = "string";
    cout << "int: " << sizeof(integer) << endl;
    cout << "double: " << sizeof(doublenum) << endl;
    cout << "string: " << sizeof(str) << endl;



}
