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

#ifndef fraction_H
#define fraction_H

class fraction
{
    public:

        void setNumerator();
        int getNumerator();
        void setDenominator();
        int getDenominator();
        fraction operator+(const fraction& fracObj);
        fraction operator-(const fraction& fracObj);
        fraction operator*(const fraction& fracObj);
        fraction operator/(const fraction& fracObj);
        friend void operator<<(ostream& os, fraction& fracObj);

	private:
		int numerator;
		int denominator;
};

#endif
