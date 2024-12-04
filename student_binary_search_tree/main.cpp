#include <iostream>
#include "binary_search_tree.hpp"
#include "binary_node.hpp"


int main(){
    
    BinarySearchTree<int> binarySearchTree;
    std::cout << "Intserting" << std::endl;
    binarySearchTree.insert(5);
    binarySearchTree.insert(10);
    binarySearchTree.insert(7);
    binarySearchTree.insert(14);
    binarySearchTree.insert(4);
    binarySearchTree.inOrderTraversal();
    std::cout << "done inserting" << std::endl;
    std::cout << "searching" << std::endl;
    std::cout << binarySearchTree.search(14) << std::endl;
    std::cout << binarySearchTree.search(0) << std::endl;
    std::cout << "removing" << std::endl;
    binarySearchTree.remove(4);
    binarySearchTree.remove(10);
    binarySearchTree.inOrderTraversal();

    return 0;
} 