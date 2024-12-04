#ifndef BTREE_HPP
#define BTREE_HPP

#include "BTreeNode.hpp"
#include <iostream>

template <typename TBD>
class BTree {
public:
    BTree(int degree);
    ~BTree();

    void insert(const TBD& key);
    void print() const;

private:
    BTreeNode<TBD>* root;
    int t;

    void insert_non_full(BTreeNode<TBD>* x, const TBD& k);
    void split_child(BTreeNode<TBD>* x, int i);
    void print_recursive(const BTreeNode<TBD>* node, int depth) const;
};

#include "BTree.ipp"

#endif // BTREE_HPP
