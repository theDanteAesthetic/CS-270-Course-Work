#include "myvector.hpp"
#include <algorithm>    // Provides copy function
using namespace std;

namespace my_vector{
    
// Constructor and Destructor
template <typename T>
myVector<T>::myVector(): capacity_(1){
    data = new T[capacity_];
    size_ = 0;
}


template <typename T>
myVector<T>::~myVector(){
    delete[] data;
}

template <typename T>
std::size_t myVector<T>::size() const{
    return size_;
}

template <typename T>
std::size_t myVector<T>::capacity() const{
    return capacity_;
}

template <typename T>
T& myVector<T>::operator[](std::size_t index){
    return data[index];
}

template <typename T>
void myVector<T>::reserve(std::size_t new_capacity){
    T *new_data;
    if(new_capacity == capacity_){
        return;
    }
    if(new_capacity < size_){
        new_capacity = size_;
    }
    new_data = new T[new_capacity];

    for(int i = 0; i < capacity_; i++){
        new_data[i] = data[i];
    }
    delete [] data;
    data = new_data;
    capacity_ = new_capacity;
}

template <typename T>
void myVector<T>::push_back(const T& value){   
        if (size_ == capacity_)
            reserve(size_+1);
        data[size_] = value;
        ++size_;
}

template <typename T>
void myVector<T>::pop_back(){   
        if (size_ == 0)
            throw std::out_of_range("MyVector::pop_back: vector is empty");
        --size_;
        data[size_].~T();
}
}