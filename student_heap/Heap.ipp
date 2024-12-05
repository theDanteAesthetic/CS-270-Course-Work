#include <stdexcept>

template <typename T>
Heap<T>::Heap(int initialCapacity):capacity(initialCapacity), size(0){
    heapArray = new T[capacity];
}

template <typename T>
Heap<T>::~Heap(){
    delete[] heapArray;
}

template <typename T>
void Heap<T>::push(const T& value){
    if(size == capacity){
        resize();
    }
    heapArray[size] = value;
    int current = size;
    size++;
    bubbleUp(current);
}

template <typename T>
void Heap<T>::resize(){
    capacity *= 2;
    T* newHeapArray = new T[capacity];
    for(int i = 0; i < size; i++){
        newHeapArray[i] = heapArray[i];
    }
    delete[] heapArray;
    heapArray = newHeapArray;
}

template <typename T>
void Heap<T>::bubbleUp(int index){
    int current = index;
    while(current > 0 && heapArray[current] > heapArray[(current - 1)/2]){
        std::swap(heapArray[current], heapArray[(current - 1)/2]);
        current = (current - 1)/2;

    }
}

template <typename T>
int Heap<T>::getSize() const{
    return size;
}

template <typename T>
bool Heap<T>::isEmpty() const{
    return size == 0;
}

template <typename T>
T Heap<T>::top() const{
    return heapArray[0];
}

template <typename T>
T Heap<T>::pop(){
    if (size == 0){
        throw std::out_of_range("heap is empty");
    }
    T value = heapArray[0];
    heapArray[0] = heapArray[size - 1];
    size--;
    bubbleDown(0);
    return value;
}

template <typename T>
void Heap<T>::bubbleDown(int index){
    int current = index;
    while (current < size && heapArray[current] < heapArray[(current + 1)*2]){
        std::swap(heapArray[current], heapArray[(current + 1)*2]);
        current = (current +1)*2;
    }
}