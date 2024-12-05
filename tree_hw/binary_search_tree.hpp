#include <vector>
#include <cstddef>

#ifndef BINARY_SEARCH_TREE_HPP
#define BINARY_SEARCH_TREE_HPP

namespace CS270 {
template <typename T>
class BinarySearchTree {
    private:
        class BinaryNode {
            public: 
                T value;
                BinaryNode* left;
                BinaryNode* right;
                BinaryNode(const T& value) : value(value), left(NULL), right(NULL) {}
        };
        BinaryNode* root;
        BinaryNode* insertRecursive(BinaryNode* node, const T& value);
        void deleteTreeRecursive(BinaryNode* node);
        void preOrderTraversal(BinaryNode* node, std::vector<T>& nodes) const;
        void inOrderTraversal(BinaryNode* node, std::vector<T>& nodes) const;
        void postOrderTraversal(BinaryNode* node, std::vector<T>& nodes) const;
    public:
        BinarySearchTree();
        ~BinarySearchTree();
        BinaryNode* getRoot();
        bool isEmpty();
        void insert(const T& value); 
        void deleteTree();
        std::vector<T> preOrderTraversal() const;
        std::vector<T> inOrderTraversal() const;
        std::vector<T> postOrderTraversal() const;    
    };
}

#include "binary_search_tree.ipp"

#endif