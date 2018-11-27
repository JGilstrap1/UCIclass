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
    bool fileExist;
    fileIO fileObj;
    string filename = argv[1];
    cout << "Received filename \"" << filename << "\"" << endl;
    fileExist = fileObj.createFile(filename);

    if(fileExist == true) {
        //read file content
        string append;
        cout << "File \"" << filename << "\" already exists and contains:" << endl;
        fileObj.readFile();

        cout << endl << "Finished reading from file, will close now" << endl;
        cout << "Would you like to append to the existing text (y or n)?" << endl;
        cin >> append;
        if (append == "y"){
            fileObj.appendToFile();
            fileObj.readFile();
            return 0;
        }

        else if (append == "n"){
            fileObj.overwriteFile();
            fileObj.readFile();
            return 0;
        }
        else{
            cout << "Invalid Entry" << endl;
        }
    }

    else{
        //write to file
        fileObj.writeToFile();
        fileObj.readFile();
    }
}
