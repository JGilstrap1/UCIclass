//**********************************************************************************************************************************
///
/// Name: James Gilstrap
/// Course: I&C SCI_X471.1: Introduction to Computer Programming Using C++ (FALL 2018/REG 00336/SEC 1)
/// Instructor: Jack Lewin
/// Assignment: Assignment 4
/// Files: main.cpp, Assignment_4_1.cpp, Assignment_4_1.h, Assignment_4_2.cpp, Assignment_4_2.h
///
//**********************************************************************************************************************************
#include <iostream>

using namespace std;

#ifndef SquareOfIntegers_H
#define SquareOfIntegers_H

class SquareOfIntegers {

    public:
        int GetUserInteger();
        int GetSquareResult(int userInput);

    private:
        string userInteger;
        int userInput;
        int squareAnswer;
};
#endif
