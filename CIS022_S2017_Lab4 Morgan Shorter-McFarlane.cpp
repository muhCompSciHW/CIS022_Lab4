// Module:              CIS022_S2017_Lab4 Morgan Shorter-McFarlane.cpp
// // Project:             CIS022_S2017_Lab4
// // Developer:   Morgan Shorter-McFarlane
// // Date:                February 17, 2017
// // Purpose:             Prompt for an integer between 0 and 35 (inclusive)
// //                              output different text based on the value of the integer
// //
//
#include "stdafx.h"				// standard libs for visual c++
#include <iostream>                             // standard input/output library

using namespace std; //use the standard namespace

int main() //program main entry point
{
	int input; //declare and integer vaable for storing user input

	cout << "Input a number between 0 and 35:  "; // prompt the user for input
	cin >> input;					// collect the input in a variable

	if (input < 0 || input > 35){			// if the input is less than zero or more than 35
		cout << "\n\nInput out of range.\n\n\n";  //tell the user the input is out of range
		system("Pause");			// wait for a keypress event before continuing execution
		return 0;				// terminate execution
	}

	if (input >= 10){				//if the input is greater than or equal to 10
		cout << "\n\n" << static_cast<char>( x - 10 + 'A' ) << "\n\n\n";  //output the remapped ASCII repesentation of the input
		system("Pause");			// wait for a keypress event before continuing execution
		return 0;				// terminate execution
	}

	cout << "\n\n" << input << "\n\n\n"; //display the input
	system("Pause"); // wait for a keypress event before continuing execution
	return 0;	// terminate execution
}
