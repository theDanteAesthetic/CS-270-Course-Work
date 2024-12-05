#include <iostream>
using namespace std;

int binarySearch(const int array[], int low, int high, int value){
    if(low > high){
        return -1;
    }
    else {
        int middle = (low + high)/2;
        if(value == array[middle]){
            return middle;
        }
        else if (value < array[middle]){
            return binarySearch(array, low, middle - 1, value);
        } else {
            return binarySearch(array, middle + 1, high, value);
        }
        
    }
}

int main(){
    int array[10] = {12, 25, 21, 24, 27, 35, 48, 50, 59, 70};
    cout << binarySearch(array, 0, 9, 70) << endl;
    return 0;
}