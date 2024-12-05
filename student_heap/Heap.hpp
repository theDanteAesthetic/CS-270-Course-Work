#ifndef HEAP_HPP
#define HEAP_HPP

template <typename T>
class Heap {
private:
    T* heapArray;          // Pointer to the dynamic array
    int capacity;          // Maximum capacity of the heap
    int size;              // Current size of the heap
    void bubbleUp(int index);
    void bubbleDown(int index);

    void resize();

public:
    Heap(int initialCapacity = 10);

    ~Heap();

    void push(const T& value);

    T pop();

    T top() const;

    bool isEmpty() const;

    int getSize() const;
};

#include "Heap.ipp"
#endif 
