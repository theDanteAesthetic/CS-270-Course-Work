#ifndef CHALLENGE3_H
#define CHALLENGE3_H

#include <set>

using namespace std; // Use the standard namespace

class Challenge3 {
private:
    multiset<int> numbers; // Private member variable to store numbers

public:
    // Constructor to initialize the multiset with predefined numbers
    Challenge3(const multiset<int>& nums);

    // Method to display the size of the multiset
    void displaySize();
};

#endif // CHALLENGE3_H