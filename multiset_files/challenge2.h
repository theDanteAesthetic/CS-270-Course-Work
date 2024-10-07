#ifndef CHALLENGE2_H
#define CHALLENGE2_H

#include <set>

using namespace std; // Use the standard namespace

class Challenge2 {
private:
    multiset<int> numbers; // Private member variable to store numbers

public:
    // Constructor to initialize the multiset with predefined numbers
    Challenge2(const multiset<int>& nums);

    // Method to find a number in the multiset
    void findNumber(int num);
};

#endif // CHALLENGE2_H
