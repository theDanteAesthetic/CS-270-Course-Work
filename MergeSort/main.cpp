#include <iostream>
using namespace std;

void merge(int data[], int n1, int n2){
    int total = n1 + n2;
    int* temp = new int[total];
    int i = 0, j = n1, k = 0;

    while(i < n1 && j < total){
        if(data[i] <= data[j]){
            temp[k++] = data[i++];

        } else {
            temp[k++] = data[j++];
        }
    }

    while (i < n1){
        temp[k++] = data[i++];
    }

    while(j < total){
        temp[k++] = data[j++];
    }

    for(int i = 0; i < total; ++i){
        data[i] = temp[i];
    }
    delete[] temp;
}

void mergeSort(int data[], int n){
    if(n < 2){
        return;
    }
    int mid = n / 2;
    mergeSort(data, mid);
    mergeSort(data + mid, n - mid);
    merge(data, mid, n - mid);
}

int main() {
    int data[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(data) / sizeof(data[0]);

    mergeSort(data, n);

    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << data[i] << " " << endl;
    }
    return 0;
}
