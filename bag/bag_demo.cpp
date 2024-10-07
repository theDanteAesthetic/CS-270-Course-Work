#include <iostream>    // Provides cout and cin
#include "bag.h"      // With value_type defined as an int
using namespace std;
using namespace main_savitch_;

int main( )
{
    bag ages;
    int user_input;

    cout << "Type the ages of animals in a zoo." << endl;
    cout << "Type a negative number when you are done:" << endl;
    cin >> user_input;
    while (user_input >= 0)
    {
        if (ages.size( ) < ages.CAPACITY) 
            ages.insert(user_input);
        else 
            cout << "I have run out of room and is not possible to add that age." << endl;
        cin >> user_input;
    }

    cout << "Type those ages again. Press return after each age:" << endl;
    while (ages.size( ) > 0)
    {
        cin >> user_input;
        if (ages.erase_one(user_input))
            cout << "Yes, I've got that age and will remove it." << endl;
        else
            cout << "No, that age does not occur!" << endl;   
    }
    
    return 0;  
}