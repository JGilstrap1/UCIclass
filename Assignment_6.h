//**********************************************************************************************************************************
///
/// Name: James Gilstrap
/// Course: I&C SCI_X471.1: Introduction to Computer Programming Using C++ (FALL 2018/REG 00336/SEC 1)
/// Instructor: Jack Lewin
/// Assignment: Assignment 7
/// Files: main.cpp, Assignment_7.cpp, Assignment_7.h, Makefile
///
//**********************************************************************************************************************************

#include <iostream>
#include <string>

using namespace std;

#ifndef number_H
#define number_H

class Fraction {

    public:
        void getNumerator();
        void setNumerator();
        void getDenominator();
        void setDenominator();

    private:
        int numeratorF1;
        int denominatorF1;
        int numeratorF2;
        int denominatorF2;

};

#endif
