/*
 * rat_nums.cpp
 *
 *  Created on: 14 Oct 2024
 *      Author: eh01527
 */

#include "rat_nums.h"
#include <iostream>
#include <cstdlib> // For exit (1)
using namespace std;

// Default constructor
RationalNumber :: RationalNumber () : numerator (0) , denominator (1) {
	cout << " Default constructor called . " << endl ;
}

// Destructor
RationalNumber ::~ RationalNumber () {
	cout << " Destructor called for " << numerator << " / " << denominator << endl ;
}

// Parameterized constructor
RationalNumber :: RationalNumber ( int num , int den ) {
	if ( den == 0) {
		cout << " \ n \ n " ;
		cout << " *** Denominator must not be zero ! ***\ n \ n " ;
		exit (1) ; // this terminates execution of the program
	}
	if ( den < 0) {
		numerator = - num ;
		denominator = - den ;
	}
	if ( den > 0) {
		numerator = num ;
		denominator = den ;
	}
	cout << " Parameterised constructor called . " << endl ;
}

// Copy constructor
RationalNumber :: RationalNumber ( const RationalNumber & other )
	: numerator ( other . numerator ) , denominator ( other . denominator) {

	cout << " Copy constructor called . " << endl ;
}

void RationalNumber :: set_value ( int num , int denom ) {
	if ( denom == 0) {
		cout << " \ n \ n " ;
		cout << " *** Denominator must not be zero ! ***\ n \ n " ;
		exit (1) ;
	}
	if ( denom < 0) {
		numerator = - num ;
		denominator = - denom ;
	}
	if ( denom > 0) {
		numerator = num ;
		denominator = denom ;
	}
}

void RationalNumber :: get_value ( int & num , int & denom ) {
	num = numerator ;
	denom = denominator ;
}


void RationalNumber :: display () const {
	cout << numerator << " / " << denominator << endl ;
}


