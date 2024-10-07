#include "challenge2.h"
#include <iostream>

// Constructor implementation
Challenge2::Challenge2(const multiset<int>& nums) {
    // Initializes the multiset with given numbers
    numbers = nums;
}

// Method to find a number
void Challenge2::findNumber(int num) {
    cout << "Challenge 2" << endl;

    multiset<int>::iterator it = numbers.begin();
    if (it != numbers.end()) {
        cout << "Number " << num << " found in the multiset." << endl;
    } else {
        cout << "Number " << num << " not found in the multiset." << endl;
    }
}
