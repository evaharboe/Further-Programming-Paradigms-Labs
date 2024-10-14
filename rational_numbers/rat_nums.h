/*
 * rat_nums.h
 *
 *  Created on: 14 Oct 2024
 *      Author: eh01527
 */
# ifndef SRC_RAT_NUMS_H_
# define SRC_RAT_NUMS_H_

class RationalNumber {
private :
int numerator ;
int denominator ;

// Helper function to calculate the greatest common divisor ( GCD )
int gcd ( int a , int b ) const {
	while ( b != 0) {
		int temp = b ;
		b = a % b ;
		a = temp ;
	}
	return a ;
}

// Helper function to reduce the rational number
void reduce () {
	int divisor = gcd ( numerator , denominator ) ;
	numerator /= divisor ;
	denominator /= divisor ;
}

public :
RationalNumber () ; // Default constructor
~ RationalNumber () ; // Destructor
RationalNumber ( int num , int den ) ; // Parameterized constructor
RationalNumber ( const RationalNumber & other ) ; // Copy constructor

void set_value ( int num , int denom ) ;
void get_value ( int & num , int & denom ) ;

// Function to display the rational number
void display () const ;

// Overload the + operator
RationalNumber operator +( const RationalNumber & other ) const {
	int num = numerator * other . denominator + other .
	numerator * denominator ;
	int denom = denominator * other . denominator ;
	RationalNumber result ( num , denom ) ;
	result . reduce () ; // Reduce the result before returning
	return result ;
}

// Overload the - operator
RationalNumber operator -( const RationalNumber & other ) const {
	int num = numerator * other . denominator - other .
	numerator * denominator ;
	int denom = denominator * other . denominator ;
	RationalNumber result ( num , denom ) ;
	result . reduce () ; // Reduce the result before returning
	return result ;
}
};

# endif /* SRC_RAT_NUMS_H_ */
