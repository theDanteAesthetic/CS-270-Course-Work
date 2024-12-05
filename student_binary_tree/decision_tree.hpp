#include <iostream>
#include <string>

#ifndef DECISION_TREE_HPP
#define DECISION_TREE_HPP

#include "binary_tree.hpp"

template <typename T>
class DecisionTree : public BinaryTree<T> {
public:
    DecisionTree();
    void traverse() const override;
};

#include "decision_tree.ipp"
#endif
