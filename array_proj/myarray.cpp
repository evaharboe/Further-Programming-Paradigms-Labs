/*
 * myarray.cpp
 *
 *  Created on: 7 Oct 2024
 *      Author: eh01527
 */

#include "myarray.h"
#include <iostream>
using namespace std;

void add_and_print (int n , float *x , float *y ) {

	float *result = new float[n];

	for(int i = 0; i < n; i++) {
		result[i] = x[i] + y[i];
		cout << result[i] << " ";
	}
}

