/*
 * main.cpp
 *
 *  Created on: 14 Oct 2024
 *      Author: eh01527
 */


#include <iostream>
#include "rat_nums.h"
using namespace std;

int main () {
// Create a RationalNumber object using the default constructor
	RationalNumber rn1;

// Set the value of the RationalNumber object
	rn1 . set_value (3 , 4) ;

// TODO : Invoke the display method using the dot operator
	rn1.display();

// TODO : Create a pointer to the RationalNumber object
	RationalNumber* pointer = &rn1;

// TODO : Invoke the display method using the arrow operator
	pointer->display();

	// test parameterised constructor
	RationalNumber rn2(2, 4);

	rn2.display();

	// test copy constructor
	RationalNumber rn3 = rn2;
	rn3.display();

	// test overloading
	RationalNumber r1 (3 , 4) ; // 3/4
	RationalNumber r2 (2 , 5) ; // 2/5

	RationalNumber r3 = r1 + r2; // Adding two RationalNumber objects
	RationalNumber r4 = r1 - r2; // Subtracting two
	RationalNumber objects;

	cout << "r1 + r2 = "; r3.display(); // Output : r1 + r2 = 23/20
	cout << "r1 - r2 = "; r4.display(); // Output : r1 - r2 = 7/20

	return 0;
}

