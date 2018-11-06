//**********************************************************************************************************************************
///
/// Name: James Gilstrap
/// Course: I&C SCI_X471.1: Introduction to Computer Programming Using C++ (FALL 2018/REG 00336/SEC 1)
/// Instructor: Jack Lewin
/// Assignment: Assignment 6
/// Files: main.cpp, Assignment_6.cpp, Assignment_6.h, Makefile
///
//**********************************************************************************************************************************

#include <iostream>
#include <string>
#include <cstring>
#include "Assignment_6.h"

using namespace std;

int number::getUserInput(){
    isNum = true;
    do
    {
        isNum = true;
        cout << "Enter a positive number to convert to hexidecimal and binary" << endl;
        cin >> userInput;

        for(int i=0; i < userInput.length()-1; i++){
            if (isalpha(userInput[i])){
                cout << "ERROR: This is not an integer" << endl;
                isNum = false;
                cin.clear();
            }
        }
        if (isNum == true){
            intInput = stoi(userInput);
            if (intInput < 0){
                cout << "ERROR: This is not a positive integer" << endl;
                isNum = false;
                cin.clear();
            }
        }
    } while (isNum == false);
    return intInput;
}

void number::print_it() {}

void hexidecimal::calculateHex(int userData) {
    hex = "";
    placeHolder = "";

    while (userData != 0)
    {
        mod = userData%16;
        userData = userData/16;
        if (mod <= 9)
        {
            placeHolder = to_string(mod);
            hex.insert(0,placeHolder);
        }
        else
        {
            hex.insert(0,checkDecValue(mod));
        }
    }
    cout << "Hex = 0x" << hex << endl;

}

void hexidecimal::print_it() {
    cout << "hex print_it" << endl;
}

string hexidecimal::checkDecValue(int Value)
{
    switch(Value)
    {
        case 10 : return "A";
        case 11 : return "B";
        case 12 : return "C";
        case 13 : return "D";
        case 14 : return "E";
        case 15 : return "F";
    }
}

void binary::calculateBin(int userData) {
    myStack stackObj;
    quotient = userData/2;
    mod = userData%2;
    do
    {
        stackObj.push(mod);
        mod = quotient%2;
        quotient = quotient/2;
        if (quotient == 0){
            stackObj.push(mod);
        }
    } while (quotient != 0);
    cout << "Binary count = " << stackObj.getCount() << endl;





    // quotient = userData/2;
    // mod = userData%2;
    // do
    // {
    //     placeHolder = to_string(mod);
    //     bin.insert(0,placeHolder);
    //     mod = quotient%2;
    //     quotient = quotient/2;
    //     if (quotient == 0){
    //         placeHolder = to_string(mod);
    //         bin.insert(0,placeHolder);
    //     }
    // } while (quotient != 0);
    // cout << "Binary = " << bin << endl;

}

void binary::print_it() {
    myStack stackObj;
    int binBuffer[stackObj.getCount()];
    for (int i=0; i < stackObj.getCount(); i++){
        binBuffer[i] = stackObj.pop();
    }
    cout << "binBuffer = " << binBuffer << endl;
}

myStack::myStack()	// constructor
{
	count = 0;	// zero the myStack
}

myStack::~myStack() {}	// destructor

void myStack::push(const int item)
{
    const int MYSTACK_SIZE = 100;
	if (count < MYSTACK_SIZE)
	{
		data[count] = item;
		++count;
	}
	else cout << "Overflow!\n";
}

int myStack::pop()
{
	if (count >0)
	{
		--count;
		return (data[count]);
	}
	else
	{
		cout << "Underflow!\n";
		return 0;
	}
}

int myStack::getCount() const
{
	return count;
}
