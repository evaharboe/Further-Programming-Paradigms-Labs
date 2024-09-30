
#include <iostream>
#include "fact.h"

using namespace std;

int main() {
	int num;
	cout << "Write an integer between 2 and 7: ";
	cin >> num;
	if (num >=2 && num <= 7) {
		int result = factorial(num);
		cout << "\nThe factorial is " << result << endl;
	} else {
		cout << "\nInteger out of bounds" << endl;
	}

	return 0;
}
