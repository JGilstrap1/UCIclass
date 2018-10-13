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

int main () {
    string firstName = "";
    string lastName = "";
    int birthYear = 0;
    int currentYear = 2018;
    Introduction introObj;

    firstName = introObj.GetUserFirstName();
    lastName = introObj.GetUserLastName();
    birthYear = introObj.GetUserBirthYear();

    int age = currentYear - birthYear;

    cout << "Hello " << firstName << " " << lastName << "," << endl;
    cout << "This year, you are " << age << " years old." << endl;

    return 0;

}
