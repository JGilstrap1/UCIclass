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
#include "Assignment_4_1.h"
#include "Assignment_4_2.h"

using namespace std;

bool DecideWhichProgram();

int main () {

    bool whichProgram = DecideWhichProgram();
    if (whichProgram == true) {
        //run square program
        SquareOfIntegers squareObj;
        int squareInteger = squareObj.GetUserInteger();
        int squareResult =squareObj.GetSquareResult(squareInteger);
        cout << squareResult << endl;
        exit(0);
    }

    else {
        //run minute convert program
        ConvertMinutesToHours convertObj;
        //create a pointer to the class object.
        //note: This actually adds an extra line of code, but the arrow operator looks cool :)
        ConvertMinutesToHours *ConvertPtr = &convertObj;
        int userMinutes = ConvertPtr->GetUserMinutes();
        ConvertPtr->convert_from_minutes(userMinutes);
        exit(0);
    }

}

bool DecideWhichProgram() {
    //Let the user decide which program to run
    bool programCheck;
    string userChoice = "";
    cout << "Please choose which program you would like to run" << endl;
    cout << "To run the program to sum the square of all intergers type 'square'" << endl;
    cout << "To run the program to convert minutes to hours type 'convert'" << endl;
    getline(cin,userChoice);
    if (userChoice == "square") {
        programCheck = true;
        return programCheck;
    }
    else if (userChoice == "convert") {
        programCheck = false;
        return programCheck;
    }
    else {
        //wrong program will send an error and restart the program.
        //note: I originally had pointers for the hour and minutes, but if the program gets reset here
        //I wasn't able to re-initialize the pointers and the addresses were incorrect
        cout << "Sorry that is an unexpected response. Please type either 'square' or 'convert'" << endl << endl;
        main();
    }

}