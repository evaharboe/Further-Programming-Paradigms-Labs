/*
 * fact.cpp
 *
 *  Created on: 30 Sept 2024
 *      Author: eh01527
 */

#include "fact.h"

int factorial(int a) {
	int result = 1;
	for (int i = 1; i <= a; i++) {
		result *= i;
	}
	return result;
}
