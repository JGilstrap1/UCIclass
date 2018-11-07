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

int getNumeratorF1(){
    return numeratorF1;
}

void setNumeratorF1(){
    cout << "Enter a numerator for the first fraction" << endl;
    cin >> numeratorF1;
}

int getDenominatorF1(){
    return denominatorF1;
}

void setDenominatorF1(){
    cout << "Enter a denominator for the first fraction" << endl;
    cin >> denominatorF1;
}

int getNumeratorF2(){
    return numeratorF2;
}

void setNumeratorF2(){
    cout << "Enter a numerator for the second fraction" << endl;
    cin >> numeratorF2;
}

int getDenominatorF2(){
    return denominatorF2;
}

void setDenominatorF2(){
    cout << "Enter a denominator for the second fraction" << endl;
    cin >> denominatorF2;
}
