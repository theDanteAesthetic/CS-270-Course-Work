#include "node.hpp"

namespace CS270{

template <typename T>
Node<T>::Node(const T& data, Node<T>* next){
     data_ = data;
     next_ = next;
}

template <typename T>
T Node<T>::getData() const {
     return data_;
}

template <typename T>
Node<T>*& Node<T>::getNext() {
    return next_;
}

template <typename T>
void Node<T>::setData(const T& data){
    data_ = data;
}

template <typename T>
void Node<T>::setNext(Node<T>* next){
    next_ = next;
}  


}