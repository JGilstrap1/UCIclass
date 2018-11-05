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

using namespace std;

#ifndef number_H
#define number_H

class number {

    public:
        void getUserInput();
        virtual void print_it();

    protected:
        int intInput;

};

class hexidecimal: public number {

    public:
        void print_it();

    protected:
        int intInput;

};

class binary: public number {

    public:
        void print_it();

    protected:
        int intInput;

};




#endif
