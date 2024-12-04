#include <iostream>
#include "BTree.hpp"

int main() {
    try {
        // Create a B-tree with minimum degree 3
        BTree<int> btree(2);

        btree.insert(5);
        btree.insert(9);
        btree.insert(3);
        //btree.insert(7);
        /*
        btree.insert(1);
        btree.insert(2);
        btree.insert(8);
        btree.insert(6);*/

        std::cout << "Printing: ";
        btree.print();

        return 0;
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
}