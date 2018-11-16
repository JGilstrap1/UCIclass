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
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

#ifndef stack_H
#define stack_H


template <class S>
class myStack {
    private:
        vector<S> item;
        int count;
        S data[100];
    public:
        myStack(){
            cout << "constructor" << endl;
            count = 0;
        }
        ~myStack(){}
        void push(S item);  // push element
        S pop();               // pop element

};

#endif