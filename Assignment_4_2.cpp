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

ConvertMinutesToHours::ConvertMinutesToHours() {
    //initial constructor
    cout << "This program converts minutes to hours and minutes." << endl << endl;
}

int ConvertMinutesToHours::GetUserMinutes() {
    cout << "Please enter a number of minutes (an integer) to be converted: ";
    cin >> inputMinutes;
    //loop through each input character and confirm an integer was entered
    try {
        for (int i=0; i < inputMinutes.length(); i++) {
            if (isalpha(inputMinutes[i])) {
                throw "Invalid entry, the entry must be an integer";
            }
        }
    }
    catch(const char* x) {
        //throw and error for a invalid entry
        cout << "Error: " << x << endl;
        exit(0);
    }
    int finalMinuteInt = stoi(inputMinutes);
    return finalMinuteInt;
}

void ConvertMinutesToHours::convert_from_minutes(int totalMin) {
    //convert total minutes to hour and minutes
    hours = totalMin/60;
    minutes = totalMin%60;

    cout << totalMin << " minutes equals " << hours << (hours == 1 ? " hour":" hours") << " and "
                                                                << minutes << (minutes == 1 ? " minute":" minutes") << endl;

}