#include "challenge1.h"
//#include "challenge2.h"
//#include "challenge3.h"
#include <set>
#include <iostream>

using namespace std; // Use the standard namespace

int main() {
    // Initialize the multiset with predefined values
    multiset<int> initialNumbers = {2, 4, 6, 8};

    // Challenge 1: Insert a number
    Challenge1 challenge1(initialNumbers); // Pass initial numbers to constructor
    int numberToInsert = 7; // Based on the clue "number of continents on Earth"
    challenge1.insertNumber(numberToInsert); // Insert the number. s

    // Get the updated multiset after insertion
    multiset<int> updatedNumbers = challenge1.getNumbers();
    
   // Challenge2 challenge2(updatedNumbers); // Pass updated numbers to constructor
   // int numberToFind = 8; // Based on the clue "number of letters in 'computer'"
   // challenge2.findNumber(numberToFind); // Find the number


  // Challenge3 challenge3(updatedNumbers); // Pass updated numbers to constructor
  // challenge3.displaySize(); // Display the size

  // cout << "----------------------------------" << endl;
  // cout << "Congratulations! You've unlocked the treasure by mastering multiset operations!" << endl;

    return 0;
}