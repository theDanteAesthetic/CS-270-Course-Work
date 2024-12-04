#include <iostream>
#include "binarytree.hpp"
#include "binaryNode.hpp"
int main() {
    BinaryNode<char>* node_A = new BinaryNode<char>('A');
    BinaryNode<char>* node_B = new BinaryNode<char>('B');
    BinaryNode<char>* node_C = new BinaryNode<char>('C');
    BinaryNode<char>* node_D_1 = new BinaryNode<char>('D');

    BinaryNode<char>* node_E = new BinaryNode<char>('E');
    BinaryNode<char>* node_F = new BinaryNode<char>('F');
    BinaryNode<char>* node_G = new BinaryNode<char>('G');
    BinaryNode<char>* node_D_2 = new BinaryNode<char>('D');

    node_A -> setLeft(node_B);
    node_A -> setRight(node_C);
    node_B -> setLeft(node_D_1);
    node_B -> setRight(node_E);
    node_D_1 -> setLeft(node_D_2);
    node_C -> setLeft(node_F);
    node_C -> setRight(node_G);
    
    BinaryTree<char> tree;
    tree.insert(node_A);
    std::cout << "Pre-order Traversal: ";
    tree.preOrderTraversal();
    std::cout << "\n";
    std::cout << "In-order Traversal: ";
    tree.inOrderTraversal();
    std::cout << "\n";
    std::cout << "Post-order Traversal: ";
    tree.postOrderTraversal();
    std::cout << "\n";
    return 0;
}