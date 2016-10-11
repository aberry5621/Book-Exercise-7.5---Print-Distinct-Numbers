//
//  main.cpp
//  Book Exercise 7.5 - Print Distinct Numbers
//
//  Created by ax on 10/10/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {

	cout << "Print Distinct Numbers \n";

	// Initialize data storage
	const int ARRAY_SIZE = 10;
	int input_numbers[ARRAY_SIZE];
	int unique_numbers[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; i++) {
		input_numbers[i] = 0;
		unique_numbers[i] = 1;
	}

	cout << "Input array container initialized: " << endl;
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << input_numbers[i] << endl;
	}

	cout << "Unique number array container initialized: " << endl;
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << unique_numbers[i] << endl;
	}

	cout << "Input 10 digits: ";
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cin >> input_numbers[i];
	}

	cout << "Input array container contents: " << endl;
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << input_numbers[i] << endl;
	}

	for (int i = 0; i < ARRAY_SIZE; i++) {
		int cur = input_numbers[i];

		bool is_unique = false; // might not need this
							   // for each i input number, check against all j unique numbers stored
		for (int j = 0; j < ARRAY_SIZE; j++) {

			cout << "compare cur: " << cur << " to " << unique_numbers[j] << endl;

			if (cur == unique_numbers[j])
			{
				cout << "match found, break .." << endl;
				break; // already logged it, not unique
			}
			else
			{
				unique_numbers[j] = cur;
			}
		}

		// 
		cout << "end of j for loop .." << endl;
	}

	// Output
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << unique_numbers[i] << endl;
	}

	cout << "~ FIN ~" << endl;


	return 0;
}
