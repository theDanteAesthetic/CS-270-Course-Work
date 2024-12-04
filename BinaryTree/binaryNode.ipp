//#include "binaryNode.hpp"

template<typename T>
BinaryNode<T>::BinaryNode(const T& value):value(value), left(NULL), right(NULL);

template<typename T>
BinaryNode<T>::~BinaryNode(){}

template<typename T>
T BinaryNode<T>::getValue() const{
    return value;
}

template<typename T>
BinaryNode<T>* BinaryNode<T>::getLeft() const{
    return left;
}

template<typename T>
BinaryNode<T>* BinaryNode<T>::getRight() const{
    return right;
}

template<typename T>
void BinaryNode<T>::setLeft(BinaryNode<T>* left){
    this -> left = left;
}

template<typename T>
void BinaryNode<T>::setRight(BinaryNode<T>* right){
    this -> right = right;
}
