#ifndef CHALLENGE1_H
#define CHALLENGE1_H

#include <set>

using namespace std; // Use the standard namespace

class Challenge1 {
private:
    multiset<int> numbers; // Private member variable to store numbers

public:
    // Constructor to initialize the multiset with predefined numbers
    Challenge1(const multiset<int>& nums);

    // Method to insert a number into the multiset
    void insertNumber(int num);

    multiset<int> getNumbers() const;

};

#endif // CHALLENGE1_H
