#ifndef BINARY_NODE_HPP
#define BINARY_NODE_HPP
template <typename T>
class BinaryNode {
    public:
        BinaryNode(const T& value);
        ~BinaryNode();
        T getValue() const;
        BinaryNode<T>* getLeft() const;
        BinaryNode<T>* getRight() const;
        void setLeft(BinaryNode<T>* left);
        void setRight(BinaryNode<T>* right);


    private:
        T value;
        BinaryNode<T>* left;
        BinaryNode<T>* right;

};
#include "binaryNode.ipp"
#endif
