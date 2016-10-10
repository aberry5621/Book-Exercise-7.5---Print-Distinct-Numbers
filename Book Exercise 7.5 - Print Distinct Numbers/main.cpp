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
        unique_numbers[i] = 0;
    }
    
    cout << "Input 10 numbers: " << endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cin >> input_numbers[i];
    }
    
    for (int i = 0; i < ARRAY_SIZE; i++) {
        // test if unique against each stored value
        bool unique = 1;
        for (int j = 0; j < ARRAY_SIZE; j++) {
            if (input_numbers[i] != unique_numbers[j]) {
                // still unique
            } else {
                // not unique, continue
                unique = 0;
                continue;
            }

        }
        if (unique == 1) {
            for (int j = 1; j < ARRAY_SIZE; i++) {
                if (unique_numbers[j] != unique_numbers[j]) {
                    unique_numbers[j] = input_numbers[i];
                }
            }
        }
    }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
    // Output
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << unique_numbers[i] << endl;
    }
    
    cout << "~ FIN ~" << endl;
    
    
    return 0;
}