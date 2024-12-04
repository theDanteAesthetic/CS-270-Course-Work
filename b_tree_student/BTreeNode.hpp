#ifndef BTREE_NODE_HPP
#define BTREE_NODE_HPP

template <typename TBD>
class BTreeNode {
public:
    // Constructor
    BTreeNode(int degree);

    // Destructor
    ~BTreeNode();

    // Getters
    int getMaxKeys() const;
    int getMinKeys() const;
    TBD* getKeys() const;
    BTreeNode** getChildren() const;
    int getNumKeys() const;
    bool isLeaf() const;

    // Setters
    void setNumKeys(int numKeys);
    void setLeaf(bool isLeaf);

private:
    int t;                      // Minimum degree
    TBD* keys;                  // Keys array
    BTreeNode** children;       // Child pointers array
    int n;                      // Number of keys currently in the node
    bool leaf;                  // Whether the node is a leaf
};

#include "BTreeNode.ipp"

#endif // BTREE_NODE_HPP
