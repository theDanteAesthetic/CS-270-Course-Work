#include "decision_tree.hpp"
#include "binary_node.hpp"
#include <iostream>
#include <string>

int main() {
    // Node 1
    BinaryNode<std::string>* rootNode = new BinaryNode<std::string>("Do you like programming?");
    // Node 2
    BinaryNode<std::string>* leftNode = new BinaryNode<std::string>("Do you prefer Python?");
    // Node 3
    BinaryNode<std::string>* rightNode = new BinaryNode<std::string>("Do you like math?");
    // Node 4
    BinaryNode<std::string>* leftLeftNode = new BinaryNode<std::string>("Great! You might be a Python developer.");
    // Node 5
    BinaryNode<std::string>* leftRightNode = new BinaryNode<std::string>("Great! You might enjoy learning new languages.");
    // Node 6
    BinaryNode<std::string>* rightLeftNode = new BinaryNode<std::string>("Great! You might be a math expert.");
    // Node 7
    BinaryNode<std::string>* rightRightNode = new BinaryNode<std::string>("Great! You might be a data scientist.");


    rootNode -> setLeft(leftNode);
    rootNode -> setRight(rightNode);
    leftNode -> setLeft(leftLeftNode);
    leftNode -> setRight(leftRightNode);
    rightNode -> setLeft(rightLeftNode);
    rightNode -> setRight(rightRightNode);

    DecisionTree<std::string> tree;
    tree.insert(rootNode);

    tree.traverse();
    return 0;
}
