#include "mystring.h" //header file


using namespace std;

namespace CS270 {
    string::string(const char s[]){ //constructor: takes an array of const characters
        _size = 0; //initialize size of our string to 0
        for(int i = 0; i < CAPACITY; i++){
            if(s[i] != '\0'){ //only runs if the there is data at the current index in inputed array
                data[i] = s[i]; //set each value of data to each value of inputed array
                _size ++; //increase size with each new value
            } else {
                return; //exits when there is no more data in inputed array
            }
        }
    }

    string::string(const string& source){ //copy constructor: makes a new string from a string object rather than an array of characters
       _size = source._size; //initialize size of string to the size of the inputed string
       for(int i = 0; i <= _size; i++){
            data[i] = source.data[i]; //sets each value of data to each value of inputed string
       }
    }

    int string::length(){ //gets and returns the _size member variable for a given string
        return _size;
    }

    bool string::operator==(string& other){ //overloading the equality operator
        if(_size != other._size){ //return false right away if the strings are different sizes
            return false;
        }
        for(int i = 0; i < CAPACITY; i++){
            if((data[i] != '\0') && (other[i] != '\0')){ //only runs if the current value of data and our inputed string both have a value at current index
                if(data[i] != other[i]){ //checks if each value are equal
                    return false; //return false if not equal
                }
            } 
        }
        return true; //returns true if each value is equal
    }

    string string::operator+(string& other){ //overloading the + operator to concatinate our strings
        string returnString = ""; //initializes our return value
        for(int i = 0; i < CAPACITY; i++){
            returnString[i] = data[i]; //sets each value of our return string to each value of data
        }
        for(int i = 0; i < CAPACITY; i++){
            returnString[i + _size] = other[i]; //sets each value after the previous values to each value of our inputed string
        }
        returnString._size = _size + other._size; //sets the size of our return string to the added sizes of our data and our inputed string
        return returnString; //returns our string consisting of first our data then the inputed string
    }

    char& string::operator[](int index){  //character access: input integer index to get that character in our string
        if(index >= _size){ //boundary case: all accessed characters outside of our string are the null character
            data[index] = '\0';
        }
        return data[index]; //return the character at the inputed index
    }
}

