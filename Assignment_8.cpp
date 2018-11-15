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

template <class S>
void myStack<S>::push(S item){
    cout << item << endl;
}