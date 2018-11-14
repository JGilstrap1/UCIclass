//**********************************************************************************************************************************
///
/// Name: James Gilstrap
/// Course: I&C SCI_X471.1: Introduction to Computer Programming Using C++ (FALL 2018/REG 00336/SEC 1)
/// Instructor: Jack Lewin
/// Assignment: Assignment 8
/// Files: main.cpp, Assignment_8.cpp, Assignment_8.h
///
//**********************************************************************************************************************************

#include <iostream>
#include <string>
#include "Assignment_8.h"

using namespace std;


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
