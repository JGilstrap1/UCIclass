//**********************************************************************************************************************************
///
/// Name: James Gilstrap
/// Course: I&C SCI_X471.1: Introduction to Computer Programming Using C++ (FALL 2018/REG 00336/SEC 1)
/// Instructor: Jack Lewin
/// Assignment: Assignment 7
/// Files: main.cpp, Assignment_7.cpp, Assignment_7.h, Makefile
///
//**********************************************************************************************************************************

#include <iostream>
#include <string>
#include "Assignment_7.h"

using namespace std;

void fraction::setNumerator(){
    cout << "Enter the numerator" << endl;
    cin >> numerator;
}

int fraction::getNumerator(){
    return numerator;
}

void fraction::setDenominator(){

    do
    {
        cout << "Enter the denominator" << endl;
        cin >> denominator;
        if(denominator == 0){
            cout << "The denominator cannot be 0" << endl;
        }
    } while (denominator == 0);
}

int fraction::getDenominator(){
    return denominator;
}

fraction fraction::operator+(const fraction& fracObj) {

    fraction addition;
    int numF1 = this->getNumerator();
    int denF1 = this->getDenominator();
    int numF2 = fracObj.numerator;
    int denF2 = fracObj.denominator;

    addition.numerator = (numF1*denF2) + (denF1*numF2);
    addition.denominator = denF1*denF2;

    if(addition.numerator < 0 && addition.denominator < 0){
        addition.numerator = abs(addition.numerator);
        addition.denominator = abs(addition.denominator);
    }
    if(addition.numerator > 0 && addition.denominator < 0){
        addition.numerator = addition.numerator * -1;
        addition.denominator = abs(addition.denominator);
    }
    cout << numF1 << "/" << denF1 << " + " << numF2 << "/" << denF2 << " = ";
    return addition;
}

fraction fraction::operator-(const fraction& fracObj) {

    fraction subtract;
    int numF1 = this->getNumerator();
    int denF1 = this->getDenominator();
    int numF2 = fracObj.numerator;
    int denF2 = fracObj.denominator;

    subtract.numerator = (numF1*denF2) - (denF1*numF2);
    subtract.denominator = denF1*denF2;

    if(subtract.numerator < 0 && subtract.denominator < 0){
        subtract.numerator = abs(subtract.numerator);
        subtract.denominator = abs(subtract.denominator);
    }
    if(subtract.numerator > 0 && subtract.denominator < 0){
        subtract.numerator = subtract.numerator * -1;
        subtract.denominator = abs(subtract.denominator);
    }
    cout << numF1 << "/" << denF1 << " - " << numF2 << "/" << denF2 << " = ";
    return subtract;
}

fraction fraction::operator*(const fraction& fracObj) {

    fraction multiply;
    int numF1 = this->getNumerator();
    int denF1 = this->getDenominator();
    int numF2 = fracObj.numerator;
    int denF2 = fracObj.denominator;

    multiply.numerator = numF1*numF2;
    multiply.denominator = denF1*denF2;

    if(multiply.numerator < 0 && multiply.denominator < 0){
        multiply.numerator = abs(multiply.numerator);
        multiply.denominator = abs(multiply.denominator);
    }
    if(multiply.numerator > 0 && multiply.denominator < 0){
        multiply.numerator = multiply.numerator * -1;
        multiply.denominator = abs(multiply.denominator);
    }
    cout << numF1 << "/" << denF1 << " * " << numF2 << "/" << denF2 << " = ";
    return multiply;
}

fraction fraction::operator/(const fraction& fracObj) {

    fraction divide;
    int numF1 = this->getNumerator();
    int denF1 = this->getDenominator();
    int numF2 = fracObj.numerator;
    int denF2 = fracObj.denominator;

    divide.numerator = numF1*denF2;
    divide.denominator = denF1*numF2;

    if(divide.numerator < 0 && divide.denominator < 0){
        divide.numerator = abs(divide.numerator);
        divide.denominator = abs(divide.denominator);
    }
    if(divide.numerator > 0 && divide.denominator < 0){
        divide.numerator = divide.numerator * -1;
        divide.denominator = abs(divide.denominator);
    }
    cout << numF1 << "/" << denF1 << " / " << numF2 << "/" << denF2 << " = ";
    return divide;
}

void operator<<(ostream& os, fraction& fracObj) {

    int finalnum = fracObj.numerator;
    int finalden = fracObj.denominator;

    for(int i=9; i > 0; i--){

        if( finalnum%i == 0 && finalden%i == 0){
            finalnum = finalnum/i;
            finalden = finalden/i;
        }
    }
    os << finalnum << "/" << finalden << endl;
}