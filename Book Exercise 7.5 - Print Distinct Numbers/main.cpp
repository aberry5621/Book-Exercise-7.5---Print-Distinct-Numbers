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
    int input_numbers[ARRAY_SIZE] = {0};
    int distinct_count = 0;
    int distinct_numbers[10] = {0};
    
    cout << "Input 10 digits: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cin >> input_numbers[i];
    }
    
    for (int i = 0; i < ARRAY_SIZE; i++) {
        int current_number = input_numbers[i];
        int current_number_occurrences = 0;
        
        // compare the current number to each distinct number
        for (int j = 0; j < 10; j++) {
            // if the current number matches, discard it
            if (current_number == distinct_numbers[j]) {
                current_number_occurrences++;
            }
            
        }
        
        if (current_number_occurrences < 1) {
            distinct_numbers[distinct_count] = current_number;
            distinct_count++;
        }

    }
    
    // Output
    cout << "distinct numbers are: ";
    for (int i = 0; i < distinct_count; i++) {
        cout << distinct_numbers[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}

