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
#include <cmath>
#include <string>
#include <windows.h>
#include "Assignment_4_1.h"
#include "Assignment_4_2.h"

using namespace std;

int SquareOfIntegers::GetUserInteger() {

    cout << "Enter an integer:" << endl;
    cin >> userInteger;
    try {
        //loop through each input character and confirm an integer was entered
        for (int i=0; i < userInteger.length(); i++) {
            if (isalpha(userInteger[i])) {
                throw "Invalid entry, the entry must be an integer";
            }
        }
    }
    catch(const char* x) {
        //throw and error for a invalid entry
        cout << "Error: " << x << endl;
        exit(0);
    }
    int finalSquareInt = stoi(userInteger);
    return finalSquareInt;

}

int SquareOfIntegers::GetSquareResult(int userInput) {

    squareAnswer = 0;
    for (int i=1; i <= userInput; i++) {

        squareAnswer += i*i;
    }
    return squareAnswer;

}