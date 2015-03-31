/******************************************************************************
*	Title:			RecursiveMultiplication.cpp
*	Author:			Travis Waelbroeck
*	Date:			March 31, 2015
*	Description:	Calls a function that accepts 2 arguments, x and y. Function
*					should return the value of x times y by adding x to itself
*					y times.
******************************************************************************/
#include <iostream>
using namespace std;

class recursiveMult {
private:
	int x,
		y,
		ans = 0,
		answer;

public:
	recursiveMult(int, int);	// Constructor
	int find(int, int);			// Recursive addition function for ( x * y )
};

recursiveMult::recursiveMult(int x, int y) {
	answer = find(x, y);
	cout << answer << endl;;
}

int recursiveMult::find(int x, int y) {
	if (x > 0) {
		x -= 1;
		ans += y;
		find(x, y);
		return ans;
	}
}