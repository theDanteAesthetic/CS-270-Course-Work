#include "mystring.h"
#include <algorithm> // provides copy function


using namespace std;

namespace CS270 {
    string::string(const char s[]){ //constructor
        _size = 0;
        for(int i = 0; i < CAPACITY; i++){
            if(s[i] != '\0'){
                data[i] = s[i];
                _size ++;
            } else {
                return;
            }
        }
    }

    string::string(const string& source){
       _size = source._size;
       char* data = new char[_size + 1];
       for(int i = 0; i <= _size; i++){
            data[i] = source.data[i];
       }
    }

    int string::length(){
        return _size;
    }

    bool string::operator==(string& other){
        for(int i = 0; i < CAPACITY; i++){
            
        }
        return true;
    }

    string string::operator+(string& other){
        
    }

    char& string::operator[](int index){
        if(index >= _size){
            data[index] = '\0';
        }
        return data[index];
    }
}

