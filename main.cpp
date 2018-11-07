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
#include "Assignment_7.h"

using namespace std;

int main () {

fraction f1;
fraction f2;
fraction f3;
cout << "Fraction 1" << endl;
f1.setNumerator();
f1.setDenominator();
cout << "Fraction 2" << endl;
f2.setNumerator();
f2.setDenominator();

f3 = f1 + f2;
cout << f3;

f3 = f1 - f2;
cout << f3;

f3 = f1 * f2;
cout << f3;

f3 = f1 / f2;
cout << f3;

}
