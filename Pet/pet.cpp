#include <iostream>

using namespace std;

int main () {

string petName;
string answer;
cout << "What is your pet name?"<< endl;
cin >> petName;

// 1. Find the first letter of your pet's name and print it
cout << " The first letter is "<< petName[0] << endl;
// 2. Find how many letters has your pet's name and print it
cout << " The number of letters are " << petName.size() << endl;
// 3. Check if your pet has feathers. Type yes or no.
cout << "Your pet has feathers?"<< endl;
cin >> answer;
if (answer == "yes") {
cout << "Your pet has feathers!"<< endl;
}
else {
cout << "Your pet does not have feathers!"<< endl;
} 
}
