#ifndef BINARY_TREE_HPP
#define BINARY_TREE_HPP

#include "binary_node.hpp"

template <typename T>
class BinaryTree {
public:
    BinaryTree();
    virtual ~BinaryTree();
    virtual void traverse() const;
    void insert(BinaryNode<T>* root);
    void inOrderTraversal() const;
    void preOrderTraversal() const;
    void postOrderTraversal() const;

protected:
    BinaryNode<T>* root;

private:   
    void inOrderTraversal(BinaryNode<T>* node) const;
    void preOrderTraversal(BinaryNode<T>* node) const;
    void postOrderTraversal(BinaryNode<T>* node) const;
    void deleteTree(BinaryNode<T>* node);
};

#include "binary_tree.ipp"
#endif
