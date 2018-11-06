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

using namespace std;

#ifndef number_H
#define number_H

class myStack
{
	private:
		int count;			// number of items in the myStack
		int data[];
	public:
		myStack();
		~myStack();
		void push(const int item);	// push an item on the myStack
		int pop();			// pop item off the myStack
		int getCount() const;	// return count
};

class number {

    public:
        int getUserInput();
        virtual void print_it(int numToConvert, myStack* stackPtr);

    protected:
        int intInput;

    private:
        myStack* stackPtr;
        string userInput;
        bool isNum;

};

class hexidecimal: public number {

    public:
        void print_it(int numToConvert, myStack* stackPtr);
        string checkDecValue(int userData);

    private:
        int hexBuffer[100];
        int mod;
        string placeHolder;

};

class binary: public number {

    public:
        void print_it(int numToConvert, myStack* stackPtr);

    private:
        int binBuffer[100];
        int mod;
        int quotient;
};

#endif
