#include <iostream>
#include "Heap.hpp"

int main(){

    Heap<int> maxHeap;

    // Push elements into the heap
    maxHeap.push(10);
    maxHeap.push(20);
    maxHeap.push(5);
    maxHeap.push(30);
    maxHeap.push(40);

    std::cout << maxHeap.pop() << std::endl;
    std::cout <<  maxHeap.pop() << std::endl;
    std::cout << maxHeap.pop() << std::endl;
    std::cout <<  maxHeap.pop() << std::endl;

    return 0;
}