#include "challenge1.h"
#include <iostream>

// Constructor implementation
Challenge1::Challenge1(const multiset<int>& nums) {
    // Initializes the multiset with given numbers
    numbers = nums;
}

// Method to insert a number
void Challenge1::insertNumber(int num) {
    numbers.insert(num); // Insert the number into the multiset
    multiset<int>::iterator begin = numbers.begin();
    multiset<int>::iterator end = numbers.end();
    cout << "Challenge 1" << endl;
    cout << "Print the multiset with the new value inserted " <<endl;
    for (multiset<int>::iterator it = begin; it != end; ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

// Getter implementation
multiset<int> Challenge1::getNumbers() const {
    return numbers;
}