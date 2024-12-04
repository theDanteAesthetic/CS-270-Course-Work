#include <stdexcept>
#include <cstring>

template <typename TBD>
BTreeNode<TBD>::BTreeNode(int degree) : t(degree), n(0), leaf(true) {
    keys = new TBD[2 * t - 1];                      // Maximum keys a node can hold
    children = new BTreeNode*[2 * t];               // Maximum children a node can have
}

template <typename TBD>
BTreeNode<TBD>::~BTreeNode() {
    delete[] keys;                                  // Free memory for keys
    delete[] children;                              // Free memory for child pointers
}

template <typename TBD>
int BTreeNode<TBD>::getMaxKeys() const {
    return 2 * t - 1;
}

template <typename TBD>
int BTreeNode<TBD>::getMinKeys() const {
    return t - 1;
}

template <typename TBD>
TBD* BTreeNode<TBD>::getKeys() const {
    return keys;
}

template <typename TBD>
BTreeNode<TBD>** BTreeNode<TBD>::getChildren() const {
    return children;
}

template <typename TBD>
int BTreeNode<TBD>::getNumKeys() const {
    return n;
}

template <typename TBD>
bool BTreeNode<TBD>::isLeaf() const {
    return leaf;
}

template <typename TBD>
void BTreeNode<TBD>::setNumKeys(int numKeys) {
    if (numKeys < 0 || numKeys > getMaxKeys()) {
        throw std::invalid_argument("Invalid number of keys");
    }
    n = numKeys;
}

template <typename TBD>
void BTreeNode<TBD>::setLeaf(bool isLeaf) {
    leaf = isLeaf;
}
