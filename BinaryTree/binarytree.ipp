//#include "binarytree.hpp"
template <typename T>
BinaryTree<T>::BinaryTree(): root(NULL);

template <typename T>
BinaryTree<T>::~BinaryTree(){
    deleteTree(root);
}

template <typename T>
void BinaryTree<T>::inOrderTraversal() const {
    inOrderTraversal(root);
}

template <typename T>
void BinaryTree<T>::inOrderTraversal(BinaryNode<T>* node) const {
    if (node != NULL){
        inOrderTraversal(node -> getLeft());
        std::cout << node -> getValue() << " ";
        inOrderTraversal(node -> getRight());
    }
}

template <typename T>
void BinaryTree<T>::preOrderTraversal() const {
    preOrderTraversal(root);
}

template <typename T>
void BinaryTree<T>::preOrderTraversal(BinaryNode<T>* node) const {
    if (node != NULL){
        std::cout << node -> getValue() << " ";
        preOrderTraversal(node -> getLeft());
        preOrderTraversal(node -> getRight());
    }
}

template <typename T>
void BinaryTree<T>::postOrderTraversal() const {
    postOrderTraversal(root);
}

template <typename T>
void BinaryTree<T>::postOrderTraversal(BinaryNode<T>* node) const {
    if (node != NULL){
        postOrderTraversal(node -> getLeft());
        postOrderTraversal(node -> getRight());
        std::cout << node -> getValue() << " ";
    }
}

template <typename T>
void BinaryTree<T>::deleteTree(BinaryNode<T>* node){
    if(node != NULL){
        deleteTree(node -> getLeft());
        deleteTree(node -> getRight());
        delete node;
    }
}