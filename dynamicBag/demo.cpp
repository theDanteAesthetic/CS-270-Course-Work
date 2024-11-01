#include <iostream>    // Provides cout and cin
#include "bag2.h"      // With value_type defined as an int
using namespace std;
using namespace cs270;

int main( )
{
   bag ages;
   int user_input; 

    cout << "Type the ages from animals in a zoo. ";
    cout << "Type a negative number when you are done:" << endl;
    cin >> user_input;
    while (user_input >= 0)
    {
        ages.insert(user_input);
        cin >> user_input;
    }

     int user_input_; 

    cout << "Type those ages again. Press return after each age:" << endl;
    while (ages.size( ) > 0)
    {
        cin >> user_input_;
        if (ages.erase_one(user_input_))
            cout << "Yes, I've got that age and have removed it." << endl;
        else
            cout << "No, that age does not occur!" << endl;
    }
}