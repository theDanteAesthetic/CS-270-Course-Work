#include <iostream>
using namespace std;

int sum(int A[], int index){
    int returnValue = 0;
    for(int i = 0; i < index; i++){
        returnValue += A[i];
    }
    return returnValue;
}

int main() {
    int A [] = {1, 2, 3, 4, 5};
    cout << sum(A, 4) << endl;
}