//**********************************************************************************************************************************
///
/// Name: James Gilstrap
/// Course: I&C SCI_X471.1: Introduction to Computer Programming Using C++ (FALL 2018/REG 00336/SEC 1)
/// Instructor: Jack Lewin
/// Assignment: Assignment 9
/// Files: main.cpp, Assignment_9.cpp, Assignment_9.h
///
//**********************************************************************************************************************************

#include <iostream>
#include <string>
#include <fstream>
#include "Assignment_9.h"

int main (int argc, char* argv[]) {
    fileIO fileObj;
    fstream fileStream;
    string filename = argv[1];
    cout << "Received filename \"" << filename << "\"" << endl;
     //fileStream.open(filename, fstream::out);
    fileObj.createFile(filename);





}
