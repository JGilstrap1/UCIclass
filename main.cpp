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
#include "Assignment_5.h"

int main () {

    Rectangle RectObj;
    Rectangle *RectPtr = &RectObj;

    RectPtr->Set_Length();
    RectPtr->Set_Width();
    RectPtr->perimeter(RectPtr->Get_Length(), RectPtr->Get_Width());
    RectPtr->area(RectPtr->Get_Length(), RectPtr->Get_Width());
    RectPtr->draw(RectPtr->Get_Length(), RectPtr->Get_Width());
    return 0;

}
