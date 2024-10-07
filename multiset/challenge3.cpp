#include "challenge3.h"
#include <iostream>

// Constructor implementation
Challenge3::Challenge3(const multiset<int>& nums) {
    // Initializes the multiset with given numbers
    numbers = nums;
}

// Method to display the size
void Challenge3::displaySize() {
    cout << "Challenge 3" << endl;
    cout << "The size of the multiset is " << numbers.size() << "." << endl;
}