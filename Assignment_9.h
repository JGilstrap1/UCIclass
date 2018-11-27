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

using namespace std;

#ifndef fileIO_H
#define fileIO_H

class fileIO
{
	private:
        string file;
        string line;
        string buffer;

	public:
    bool createFile(string filename);
    void writeToFile();
    void readFile();
    void appendToFile();
    void overwriteFile();
};

#endif
