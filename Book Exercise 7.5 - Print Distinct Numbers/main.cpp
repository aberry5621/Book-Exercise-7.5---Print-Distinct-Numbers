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
        for (int j = 0; j < ARRAY_SIZE; j++) {
            if (current_number == input_numbers[j]) {
                current_number_occurrences++;
            }
        }
        if (current_number_occurrences > 1) {
            // current number is not distinct :(
            // cout << "current number " << current_number << " is not distinct" << endl;
        } else if (current_number_occurrences == 1) {
            // store current number as a distinct value
            //cout << "current number " << current_number << " is distinct and being stored to distinct_numbers[] position " << distinct_count << endl;
            distinct_numbers[distinct_count] = current_number;
            distinct_count++;
        }
    }
    
    // Output
    cout << "distinct numbers stored: " << endl;
    for (int i = 0; i < distinct_count; i++) {
        cout << distinct_numbers[i] << endl;
    }
    
    cout << "~ FIN ~" << endl;
    
    return 0;
}

