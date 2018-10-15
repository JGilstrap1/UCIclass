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
#include <cmath>
#include <limits>
#include "Assignment_5.h"

void Rectangle::Set_Length() {

    do {
        cout << "Enter a length between 1.0 and 20.0" << endl;
        cin >> userLength;
        if (userLength < 1 || userLength > 20) {
        cout << "Invalid Entry: The number needs to be from 1.0 to 20.0" << endl;
        }
    }
    while (userLength < 1 || userLength > 20);
}

void Rectangle::Set_Width() {

    do {
        cout << "Enter a width between 1.0 and 20.0:" << endl;
        cin >> userWidth;
        if (userWidth < 1 || userWidth > 20) {
        cout << "Invalid Entry: The number needs to be from 1.0 to 20.0" << endl;
        }
    }
    while (userWidth < 1 || userWidth > 20);
}

const float Rectangle::Get_Length() {

    return userLength;
}

const float Rectangle::Get_Width() {

    return userWidth;
}

const void Rectangle::perimeter(float length, float width) {

    calculatedPerimeter = 2*length + 2*width;

}

const void Rectangle::area(float length, float width) {

    calculatedArea = length*width;

}

const void Rectangle::draw(int length, int width) {

    cout << "The length and the width of the rectangle are " << userLength << " and " << userWidth << " respectively" << endl;
    cout << "The perimeter of the rectangle is " << calculatedPerimeter << endl;
    cout << "The area of the rectangle is " << calculatedArea << endl;

    for(int i=0; i < length; i++) {

        for(int j=0; j < width; j++){
            cout << "*";
        }
        cout << endl;
    }

}