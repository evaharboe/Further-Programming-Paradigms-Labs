/*
 * operations.cpp
 *
 *  Created on: 7 Oct 2024
 *      Author: eh01527
 */

#include "operations.h"
#include <iostream>
using namespace std;

// Function to add two integers ( pass by value )
int addByValue (int a , int b ) {
// your code
	return a+b;
}

// Function to add two integers ( pass by reference )
void addByReference (int &a , int &b , int &result ) {
// your code
	result = a + b;
}

// Function to add two integers ( pass by pointer )
void addByPointer ( int *a , int *b , int * result ) {
// your code
	*result = *a + *b;
}

