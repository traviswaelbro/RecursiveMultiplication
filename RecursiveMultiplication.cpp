/******************************************************************************
*	Title:			RecursiveMultiplication.cpp
*	Author:			Travis Waelbroeck
*	Date:			March 31, 2015
*	Description:	Calls a function that accepts 2 arguments, x and y. Function
*					should return the value of x times y by adding x to itself
*					y times.
******************************************************************************/
#include "RecursiveMultiplication.h"

int main()
{
	int val1,
		val2,
		answer;

	cout << "Multiply: ";
	cin >> val1;
	cout << "By: ";
	cin >> val2;
	recursiveMult(val1, val2);

	cin.get();
	cin.get();
	return 0;
}