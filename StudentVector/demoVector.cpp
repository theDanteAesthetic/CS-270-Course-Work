#include <iostream>    
#include "myvector.hpp"  
#include <vector>    
using namespace std;
using namespace my_vector;

int main(){
    myVector<int> numbers;
    cout << numbers.size() << endl;
    cout << numbers.capacity() << endl;
    numbers.push_back(10);
    numbers.push_back(11);
    numbers.push_back(101);
    numbers.push_back(0);
    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << endl;
    }
    return 0;
}