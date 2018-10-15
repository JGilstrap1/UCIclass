//**********************************************************************************************************************************
///
/// Name: James Gilstrap
/// Course: I&C SCI_X471.1: Introduction to Computer Programming Using C++ (FALL 2018/REG 00336/SEC 1)
/// Instructor: Jack Lewin
/// Assignment: Assignment 5
/// Files: main.cpp, Assignment_5.cpp, Assignment_5.h, Makefile
///
//**********************************************************************************************************************************

#include <iostream>
#include <string>

using namespace std;

#ifndef Rectangle_H
#define Rectangle_H

class Rectangle {

    public:

    void Set_Length();
    void Set_Width();
    const float Get_Length();
    const float Get_Width();
    const void perimeter(float length, float width);
    const void area(float length, float width);
    const void draw(int length, int width);


    private:

    float userLength;
    float userWidth;
    float calculatedPerimeter;
    float calculatedArea;


};
#endif
