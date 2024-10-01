#include <iostream> // Provides cout and cin
#include <cstdlib> // Provides EXIT_SUCCESS
#include "newpoint.h" // Provides the point class
using namespace std; // Allows all Standard Library items to be used
using main_savitch_2B::point;

int main( )
{
    point sample(6.0,-4.0);
    rotate_to_upper_right(sample);
    cout<< sample.get_x()<<endl;
    cout<< sample.get_y()<<endl;
    point sample_(6.0,-4.0);
    rotations_needed(sample_);
    cout<< sample_.get_x()<<endl;
    cout<< sample_.get_y()<<endl;

    point p;
    cin >> p;
    cout << p;

    return EXIT_SUCCESS;
}
