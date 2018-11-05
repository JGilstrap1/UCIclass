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
#include <cmath>
#include <limits>
#include "Assignment_6.h"

using namespace std;

void number::getUserInput(){

    do
    {
        cout << "Enter a positive number" << endl;
        cin >> intInput;
    } while (intInput < 0 || !isdigit(intInput));

    cout << "got it" << endl;

}

void number::print_it() {
    cout << "number::print" << endl;
}

void hexidecimal::print_it() {
    cout << "hex::print" << endl;
}

void binary::print_it() {
    cout << "bin::print" << endl;
}