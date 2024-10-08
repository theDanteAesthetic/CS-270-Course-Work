#include "Caesar.h"
using namespace std;

static const int maxchar = 'z';
static const int minchar = ' ';
static const int charrange = 1 + maxchar - minchar;

// Caesar constructor, accepts a single string argument as the cipher
// key
Caesar::Caesar(string k){
    key = k;
}

// get_key: return the current cipher key
string Caesar::get_key() const{
    return key;
}

//encode: encode the string argument using the key, return encoded string
string Caesar::encode(string message) const{
    string result = "";
    for(int i = 0; i < message.size(); i++){
        char messageChar = message[i];
        char keyChar = key[i % key.size()];
        int messageIndex = (int)messageChar - (int)minchar;
        int keyIndex = (int)keyChar - (int)minchar;
        int encryptedIndex = (messageIndex + keyIndex) % charrange;
        char encryptedChar = static_cast<char>(encryptedIndex + (int)minchar);
        result += encryptedChar;
    }
    return result;
}

//decode: decode the string argument using the key, return decoded string
string Caesar::decode(string message) const{
    string result = "";
    for(int i = 0; i < message.size(); i++){
        char messageChar = message[i];
        char keyChar = key[i % key.size()];
        int messageIndex = (int)messageChar;
        int keyIndex = (int)keyChar;
        int encryptedIndex = safemod((messageIndex - keyIndex), charrange);
        char encryptedChar = static_cast<char>(encryptedIndex);
        result += encryptedChar;
    }
    return result;
}

//A mod function that is "safe" to use even when val might be negative
char Caesar::safemod(int val, int mod) const{
    int modval = val % mod;
    if (modval < 0) {
        modval += mod;
    }
    return char(modval + 32);
}
