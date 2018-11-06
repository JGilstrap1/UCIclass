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

class number {

    public:
        int getUserInput();
        virtual void print_it();

    protected:
        int intInput;

    private:
        string userInput;
        bool isNum;

};

class hexidecimal: public number {

    public:
        void print_it();
        void calculateHex(int userData);
        string checkDecValue(int userData);

    private:
        int mod;
        string hex;
        string placeHolder;

};

class binary: public number {

    public:
        void print_it();
        void calculateBin(int userData);

    private:
        int mod;
        int quotient;
        string bin;
        string placeHolder;
};

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

#endif
