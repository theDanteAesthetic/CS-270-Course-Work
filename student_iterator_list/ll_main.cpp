#include <iostream>
#include <forward_list>
#include "ll.h"

using namespace std;

template<class T>
void printList(forward_list<T>& L) {
    for(auto it = L.begin(); it != L.end(); ++it){
        cout << *it << endl;
    }
}

int main() {
    forward_list<int> alist;
    int nums[5] = {2, 7, 10, 12, 9};
    for (int i = 0; i < 5; i++) {
        alist.push_front(nums[i]);
    }
    printList(alist);
    return 0;
}