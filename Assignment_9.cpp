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

using namespace std;

void fileIO::createFile(string filename){
    fstream fileStream;
    fileStream.open(filename);
     if(fileStream.fail()){
        cout << "New file \" " << filename << "\" will be created" << endl;
        fileStream.open(filename, fstream::out);
     }
     else{
         cout << "display file content" << endl;
     }
     fileStream.close();
}


