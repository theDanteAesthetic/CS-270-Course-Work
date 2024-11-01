#include <iostream>    // Provides cout and cin
#include "bag3.h"      // With value_type defined as an int
using namespace std;
using namespace MAIN_CS270;

int main( )
{
    // Create a bag with 5 double values: 4.0, 3.5, 2.6, 4.0, 2.0
    // Count how many times 4.0 is in the bag and print it
    // Erase just one time the value 4.0 from tha bag 
    // Count how many times 4.0 is in the bag and print it
    bag values;
    values.insert(4.0);
    values.insert(3.5);
    values.insert(2.6);
    values.insert(4.0);
    values.insert(2.0);


    cout << values.count(4.0) << endl;
    values.erase_one(4.0);
    cout << values.count(4.0) << endl;

}

    