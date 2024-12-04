#ifndef BINARY_SEARCH_TREE_HPP
#define BINARY_SEARCH_TREE_HPP

#include "binary_node.hpp"

template <typename T>
class BinarySearchTree {
    public:
        BinarySearchTree();
        ~BinarySearchTree();
        void inOrderTraversal() const;
        void insert(const T& value); 
        bool search(const T& value) const;
        void remove(const T& value);

    private:
        BinaryNode<T>* root;
        BinaryNode<T>* insertRecursive(BinaryNode<T>* node, const T& value);
        bool searchRecursive(BinaryNode<T>* node, const T& value) const;
        void inOrderTraversal(BinaryNode<T>* node) const;
        BinaryNode<T>* removeRecursive(BinaryNode<T>* node, const T& value);
        BinaryNode<T>* findMin(BinaryNode<T>* node);
        void deleteTree(BinaryNode<T>* node);
};

#include "binary_search_tree.ipp"

#endif
