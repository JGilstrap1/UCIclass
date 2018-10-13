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

#ifndef ConvertMinutesToHours_H
#define ConvertMinutesToHours_H

class ConvertMinutesToHours {

    public:
        ConvertMinutesToHours();
        int GetUserMinutes();
        void convert_from_minutes(int totalMin);

    private:
        //input min as string to loop thru for exception handling
        string inputMinutes;
        int hours;
        int minutes;

};
#endif