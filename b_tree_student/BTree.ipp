#include <stdexcept>
#include <iostream>

template <typename TBD>
BTree<TBD>::BTree(int degree) : t(degree), root(nullptr) {
    if (t < 2) {
        throw std::invalid_argument("Minimum degree must be at least 2");
    }
}

template <typename TBD>
BTree<TBD>::~BTree() {
    delete root;
}

template <typename TBD>
void BTree<TBD>::insert(const TBD& key) {
    if (root == NULL){
        root = new BTreeNode<TBD>(t);
        root -> getKeys()[0] = key;
        root -> setNumKeys(1);
        return;
    }
    insert_non_full(root, key);

}

template <typename TBD>
void BTree<TBD>::insert_non_full(BTreeNode<TBD>* x, const TBD& k) {
   int i = x -> getNumKeys() - 1;
   if(x -> isLeaf()){
    while(i >= 0 && k < x->getKeys()[i]){
        x-> getKeys()[i+1] = x->getKeys()[i];
        i--;
    }
    x -> getKeys()[i+1] = k;
    x -> setNumKeys(x->getNumKeys() + 1);
   }
}

template <typename TBD>
void BTree<TBD>::split_child(BTreeNode<TBD>* x, int i) {
   
}

template <typename TBD>
void BTree<TBD>::print() const {
    if (!root) {
        std::cout << "Tree is empty." << std::endl;
        return;
    }
    print_recursive(root, 0);
}

template <typename TBD>
void BTree<TBD>::print_recursive(const BTreeNode<TBD>* node, int depth) const {
    for (int i = 0; i < depth; i++) {
        std::cout << "  ";
    }

    std::cout << "[";
    for (int i = 0; i < node->getNumKeys(); i++) {
        std::cout << node->getKeys()[i];
        if (i < node->getNumKeys() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    if (!node->isLeaf()) {
        for (int i = 0; i <= node->getNumKeys(); i++) {
            print_recursive(node->getChildren()[i], depth + 1);
        }
    }
}
