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

using namespace std;

#ifndef stack_H
#define stack_H

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
