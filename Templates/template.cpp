#include <iostream>
using namespace std;

template <typename T>
int sum(T A[], int index){
    T returnValue = 0.0;
    for(int i = 0; i < index; i++){
        returnValue += A[i];
    }
    return returnValue;
}

int main() {
    double A[] = {1.1, 2.2, 3.3, 4.4, 4.5};
    cout << sum(A, 4) << endl;
}