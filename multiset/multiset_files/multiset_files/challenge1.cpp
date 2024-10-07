#include "challenge1.h"
#include <iostream>

// Constructor implementation
Challenge1::Challenge1(const multiset<int>& nums) {
    // Initializes the multiset with given numbers
    add_your_code_here
}

// Method to insert a number
void Challenge1::insertNumber(int num) {
    numbers.insert(add_your_code); // Insert the number into the multiset
    multiset<int>::iterator begin = add_your_code_here;
    multiset<int>::iterator end = add_your_code_here;
    cout << "Challenge 1" << endl;
    cout << "Print the multiset with the new value inserted " <<endl;
    for (multiset<int>::iterator it = begin; it != end; ++it) {
        cout << *add_your_code_here << " ";
    }
    cout << endl;
}

// Getter implementation
multiset<int> Challenge1::getNumbers() const {
    return numbers;
}