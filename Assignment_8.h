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

using namespace std;

#ifndef stack_H
#define stack_H


template <class S>
class myStack{
    S item;
    int count;
    public:
        myStack(){
            cout << "constructor" << endl;
            myStack::count = 0;
        };
        void push(S item);



};

#endif