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
    int unique_count = 0;
    int unique_numbers[10] = {0};
    
    for (int i = 0; i < ARRAY_SIZE; i++) {
        input_numbers[i] = 0;
    }
    
    cout << "Input array container initialized: " << endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << input_numbers[i] << endl;
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
        int current_number = input_numbers[i];
        int current_number_occurrences = 0;
        for (int j = 0; j < ARRAY_SIZE; j++) {
            if (current_number == input_numbers[j]) {
                current_number_occurrences++;
            }
        }
        if (current_number_occurrences > 1) {
            // current number is not unique :(
            // cout << "current number " << current_number << " is not unique" << endl;
        } else if (current_number_occurrences == 1) {
            // store current number as a unique value
            //cout << "current number " << current_number << " is unique and being stored to unique_numbers[] position " << unique_count << endl;
            unique_numbers[unique_count] = current_number;
            unique_count++;
        }
    }
    
    // Output
    cout << "Unique numbers stored: " << endl;
    for (int i = 0; i < unique_count; i++) {
        cout << unique_numbers[i] << endl;
    }
    
    cout << "~ FIN ~" << endl;
    
    
    return 0;
}

