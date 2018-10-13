//**********************************************************************************************************************************
///
/// Name: James Gilstrap
/// Course: I&C SCI_X471.1: Introduction to Computer Programming Using C++ (FALL 2018/REG 00336/SEC 1)
/// Instructor: Jack Lewin
/// Assignment: Assignment 2
/// Files: main.cpp, Assignment_2.cpp, Assignment_2.h, Makefile
///
//**********************************************************************************************************************************
#include <iostream>
#include <string>
#include "Assignment_2.h"

using namespace std;

string Introduction :: GetUserFirstName() {
    cout << "What is your first name? " << endl;
    cin >> firstNameInput;
    return firstNameInput;
}

string Introduction :: GetUserLastName() {
    cout << "What is your last name? " << endl;
    cin >> lastNameInput;
    return lastNameInput;
}

int Introduction :: GetUserBirthYear() {
    cout << "What year were you born? " << endl;
    cin >> birthYearInput;
    return birthYearInput;
}
