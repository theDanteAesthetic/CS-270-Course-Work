#include "file.h"
#include <iostream>
using namespace std;

int main(){
int a, b;
cout << "First value: ";
cin >> a;
cout << "Second value: ";
cin >> b;
cout << "gcd: " << gcd(a,b) << endl;
return 0;
}