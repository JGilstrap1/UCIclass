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

bool fileIO::createFile(string filename){
    file = filename;
    fstream fileStream;
    fileStream.open(filename);
    if(fileStream.fail()){
        cout << "New file \"" << filename << "\" will be created" << endl;
        fileStream.open(filename, fstream::out);
        fileStream.close();
        return false;
    }
    else{
        return true;
    }
}

void fileIO::writeToFile() {
    cout << "Enter text to be saved" << endl;
    fstream fileStream;
    fileStream.open(file);
    while(getline(cin,buffer)){
        fileStream << buffer << endl;
    }
    cout << "Finished writing to file, will close now" << endl;
    cout << "New file \"" << file << "\" contains:" << endl;
    fileStream.close();
}

void fileIO::readFile() {
    fstream fileStream;
    fileStream.open(file);
    while ( getline (fileStream,line) ){
        cout << line << '\n';
    }
    fileStream.close();
}

void fileIO::appendToFile() {
    cout << "Enter text to be saved" << endl;
    fstream fileStream;
    fileStream.open(file,fstream::app);
    while(getline(cin,buffer)){
        fileStream << buffer << endl;
    }
    cout << "Finished writing to file, will close now" << endl;
    cout << "New file \"" << file << "\" contains:" << endl;
    fileStream.close();
}

void fileIO::overwriteFile() {
    cout << "Enter text to be saved" << endl;
    fstream fileStream;
    fileStream.open(file, fstream::out | fstream::trunc);
    while(getline(cin,buffer)){
        fileStream << buffer << endl;
    }
    cout << "Finished writing to file, will close now" << endl;
    cout << "File \"" << file << "\" contains:" << endl;
    fileStream.close();
}