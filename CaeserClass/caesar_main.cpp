//In this file, use the Ceasar class from the library you just created to 
// interact with the user.  You may reuse code you wrote for the 
// previous assignment here if you think it would be useful, but the 
// current application MUST use the new object-oriented library interface 
// to do encoding and decoding.
#include <iostream>
#include "Caesar.h"
#include "Caesar.cpp"
using namespace std;

int main(){
    string message, key, answer;
    cout << "Would you like to encode or decode a message?" << endl;
    cin >> answer;

    if(answer != ""){
        if(answer != "encode" && answer != "decode"){
            cout << "Sorry! I didn't quite catch that! Please answer either 'encode' or 'decode'" << endl;
            cout << "Would you like to encode or decode a message?" << endl;
            cin >> answer;
        }
        cout << "What message would you like to " << answer << endl;
        cin >> message; //I tried using getline() so it didn't ignore whitespace but it didn't work
        if(answer == "encode"){
            cout << "What encryption key would you like to use?" << endl;
            cin >> key;
            Caesar Caesar(key);
            cout << "encoded message: " << Caesar.encode(message) << endl;
        }
        if(answer == "decode"){
            cout << "What decryption key would you like to use?" << endl;
            Caesar Caesar(key);
            cout << "decoded message: " << Caesar.decode(message) << endl;
        }
        }
    
    
}