//**********************************************************************************************************************************
///
/// Name: James Gilstrap
/// Course: I&C SCI_X471.1: Introduction to Computer Programming Using C++ (FALL 2018/REG 00336/SEC 1)
/// Instructor: Jack Lewin
/// Assignment: Assignment 8
/// Files: main.cpp
///
//**********************************************************************************************************************************

#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
#define STACK_SIZE 100
#define OVERFLOW 3

using namespace std;

template <class S>
class myStack {
    private:
        vector<S> item;
        int count;
        S data[100];
    public:
        myStack(){
            count = 0;
        }
        ~myStack(){}
        void push(S item, int size);
        S pop();
        S menu();
        void string(myStack strObj);
        void integer(myStack intObj);
        void dub(myStack dubObj);
        void overflow(myStack intObj);
        void underflow(myStack intObj);
};

template <class S>
void myStack<S>::push (S item, int MYSTACK_SIZE) {
	if (count < MYSTACK_SIZE)
	{
		data[count] = item;
		++count;
	}
	else throw "Overflow!\n";
}

template <class S>
S myStack<S>::pop () {
    	if (count >0)
	{
		--count;
		return (data[count]);
	}
	else
	{
		throw "Underflow!\n";
		return 0;
	}
}

template <class S>
void myStack<S>::string(myStack strObj){
    cout << "Push: Jimbo, Ophie, Liam" << endl;
    strObj.push("Jimbo",STACK_SIZE);
    strObj.push("Ophie",STACK_SIZE);
    strObj.push("Liam",STACK_SIZE);
    cout << "Pop: Liam, Ophie, Jimbo" << endl;
    cout << strObj.pop() << endl;
    cout << strObj.pop() << endl;
    cout << strObj.pop() << endl;
}

template <class S>
void myStack<S>::integer(myStack intObj){
    cout << "Push: 100, 200, 300" << endl;
    intObj.push(100,STACK_SIZE);
    intObj.push(200,STACK_SIZE);
    intObj.push(300,STACK_SIZE);
    cout << "Pop: 300, 200, 100" << endl;
    cout << intObj.pop() << endl;
    cout << intObj.pop() << endl;
    cout << intObj.pop() << endl;
}

template <class S>
void myStack<S>::dub(myStack dubObj){
    cout << "Push: 1.1, 2.2, 3.3" << endl;
    dubObj.push(1.1,STACK_SIZE);
    dubObj.push(2.2,STACK_SIZE);
    dubObj.push(3.3,STACK_SIZE);
    cout << "Pop: 3.3, 2.2, 1.1" << endl;
    cout << dubObj.pop() << endl;
    cout << dubObj.pop() << endl;
    cout << dubObj.pop() << endl;
}

template <class S>
void myStack<S>::overflow(myStack intObj){
    cout << "Push: 100, 200, 300, 400" << endl;
    intObj.push(100,OVERFLOW);
    intObj.push(200,OVERFLOW);
    intObj.push(300,OVERFLOW);
    intObj.push(400,OVERFLOW);
}

template <class S>
void myStack<S>::underflow(myStack intObj){
    cout << "Push: 100, 200, 300" << endl;
    intObj.push(100,STACK_SIZE);
    intObj.push(200,STACK_SIZE);
    intObj.push(300,STACK_SIZE);
    cout << "Pop: 300, 200, 100" << endl;
    cout << intObj.pop() << endl;
    cout << intObj.pop() << endl;
    cout << intObj.pop() << endl;
    cout << intObj.pop() << endl;
}


int main () {
    try{
        int menuOption = 0;
        cout << "Please enter the number corresponding to your selection" << endl;
        cout << "1 : Use a string data type" << endl;
        cout << "2 : Use a integer data type" << endl;
        cout << "3 : Use a double data type" << endl;
        cout << "4 : Overflow exception" << endl;
        cout << "5 : Underflow exception" << endl;
        cin >> menuOption;
        if(isalpha(menuOption) || menuOption < 1 || menuOption > 5){
            throw "Invalid entry";
        }
        myStack<string> strObj;
        myStack<int> intObj;
        myStack<double> dubObj;

        switch(menuOption) {
            case 1: strObj.string(strObj);
                    break;
            case 2: intObj.integer(intObj);
                    break;
            case 3: dubObj.dub(dubObj);
                    break;
            case 4: intObj.overflow(intObj);
                    break;
            case 5: intObj.underflow(intObj);
                    break;
        }
    } catch (const char* ex){
        cout << "Exception: " << ex << endl;
    }








}
