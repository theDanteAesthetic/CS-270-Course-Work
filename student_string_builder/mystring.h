// FILE: mystring.h
// CLASS PROVIDED: string

// CONSTRUCTOR for the string class
// string mystring = "some string";
// string mystring("some string");
//  string(const char s[])

// MEMBER FUNCTIONS
// compare current object to another for equality
// s1 == s2
// bool operator==(string& other)

 // concatenation 
 // string news = s1 + s2;
 // string operator+(string& other);

// access char
// cout << s[i];
 // s[i] = 'x'
// char& operator[](int index);

// string length
// int length();

#ifndef CS270_STRING
#define CS270_STRING

namespace CS270 {

const int CAPACITY = 1000;

class string {
 public:
  string(const char s[]);
  string(const string& source);
  int length();
  bool operator==(string& other);
  string operator+(string& other);
  char& operator[](int index);
  
 private:
  //Private empty constructor prevents other code from creating an uninitialized string.
  string() {};
  //Declare necessary member variables here
  int _size;
  char data[CAPACITY];
};
}

#endif 
