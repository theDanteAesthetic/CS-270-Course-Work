#include <iostream>
using namespace std;

void swapElements(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}
void selectionSort(int array[], int n){
    for(int i = 0; i < n -1; i++){
        int minValue = array[i];
        int minIndex = i;

        for(int j = i + 1; j < n; j++){
            if(array[j] < minValue){
                minValue = array[j];
                minIndex = j;
            }
        }
        swapElements(array[i], array[minIndex]);
    }
}

int main(){
    int a[5] = {23, 67, 12, 1, 9};
    selectionSort(a, 5);
    for(int i = 0; i < 5; i++){
        cout << a[i] << endl;
    }
    return 0;
}