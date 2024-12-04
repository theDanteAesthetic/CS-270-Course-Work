#ifndef BINARY_TREE_HPP
#define BINARY_TREE_HPP
#include "binaryNode.hpp"


template <typename T>
class BinaryTree{
    public:
        BinaryTree();
        ~BinaryTree();
        void insert(BinaryNode<T>* root);
        void inOrderTraversal() const;
        void preOrderTraversal() const;
        void postOrderTraversal() const;
    
    private:
        BinaryNode<T>* root;
        void inOrderTraversal(BinaryNode<T>* node) const;
        void postOrderTraversal(BinaryNode<T>* node) const;
        void preOrderTraversal(BinaryNode<T>* node) const;
        void deleteTree(BinaryNode<T>* node);

}
#include "binarytree.ipp"
#endif