/*
 * main.cpp
 *
 *  Created on: 7 Oct 2024
 *      Author: eh01527
 */

# include <iostream>
# include "operations.h"

int main () {
int x = 10 , y = 20;
int result ;

// Add by value
result = addByValue (x , y ) ;
std :: cout << "Add by Value : " << result << std :: endl ;

// Add by reference
addByReference (x , y , result ) ;
std :: cout << "Add by Reference : " << result << std :: endl ;

// Add by pointer
addByPointer (&x , &y , & result ) ;
std :: cout << "Add by Pointer : " << result << std :: endl ;

return 0;
}



