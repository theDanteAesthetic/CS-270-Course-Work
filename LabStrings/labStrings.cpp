#include <iostream>
using namespace std;

// Create a function that returns a string reverse.
// The reverse function has a string input.
// Example: reverse("Walla"). It returns allaW

// Create a function that returns the character
// given an index. The index can be even be larger that the
// end of the string. Example access("Walla city", 11).It returns a

// Create a main function and test your two functions.
// The user should type the string to be reversed and print the reverse string
// The user should type the string and index and print the char with that index

string reverse(string input){
    string returnValue = "";
    for(int i = input.size() - 1; i >= 0; i--){
        returnValue += input[i];
    }
    
    return returnValue;
}

char access(string input, int index){
    return input[(index % (input.size()) - 1)];
}

int main(){
    string input;
    int index;
    cout << "what would you like your string to be?" << endl;
    cin >> input;
    cout << "what would you like your index to be?" << endl;
    cin >> index;
    cout << "reverse: " << reverse(input) << endl;
    cout << "access: " << access(input, index) << endl;
    
}