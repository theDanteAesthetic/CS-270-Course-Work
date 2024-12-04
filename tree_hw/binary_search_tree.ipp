namespace CS270 {
template <typename T>
BinarySearchTree<T>::BinarySearchTree(): root(NULL){}

template <typename T>
BinarySearchTree<T>::~BinarySearchTree(){
    deleteTree();
}

template <typename T>
typename BinarySearchTree<T>::BinaryNode* BinarySearchTree<T>::getRoot(){
    return root;
}

template <typename T>
bool BinarySearchTree<T>::isEmpty(){
    return root == NULL;
}

template <typename T>
void BinarySearchTree<T>::deleteTree() {
    deleteTreeRecursive(root);
    root = NULL;
}

template <typename T>
void BinarySearchTree<T>::deleteTreeRecursive(BinaryNode* node) {
    if (node != NULL) {
        deleteTreeRecursive(node->left);
        deleteTreeRecursive(node->right);
        delete node;
    }
}

template <typename T>
void BinarySearchTree<T>::insert(const T& value){
     root = insertRecursive(root, value);
}

// TO DO
template <typename T>
BinarySearchTree<T>::BinaryNode* BinarySearchTree<T>::insertRecursive(BinaryNode* node, const T& value){
    if(node == NULL){
        return new BinaryNode(value);
    }
    if(value > node -> getRoot()){
        return insertRecursive(right, value);
    }
    else(value < node -> getRoot()){
        return insertRecursive(left, value);
    }
}



template <typename T>
std::vector<T> BinarySearchTree<T>::preOrderTraversal() const {
    std::vector<T> nodes;
    preOrderTraversal(root, nodes);
    return nodes;
}

// TO DO
template <typename T>
void BinarySearchTree<T>::preOrderTraversal(BinaryNode* node, std::vector<T>& nodes) const {
    std::vector<T> n;
    if(node != NULL){
        n.push_back(node -> getRoot());
        preOrderTraversal(node -> left);
        preOrderTaversal(node -> right);
    }
    nodes = n;
}

template <typename T>
std::vector<T> BinarySearchTree<T>::inOrderTraversal() const {
    std::vector<T> nodes;
    inOrderTraversal(root, nodes);
    return nodes;
}

// TO DO
template <typename T>
void BinarySearchTree<T>::inOrderTraversal(BinaryNode* node, std::vector<T>& nodes) const{
    std::vector<T> n;
    if(node != NULL){
        inOrderTraversal(node -> left);
        n.push_back(node -> getRoot());
        inOrderTaversal(node -> right);
    }
    nodes = n;
}

template <typename T>
std::vector<T> BinarySearchTree<T>::postOrderTraversal() const {
    std::vector<T> nodes;
    postOrderTraversal(root, nodes);
    return nodes;
}

// TO DO
template <typename T>
void BinarySearchTree<T>::postOrderTraversal(BinaryNode* node, std::vector<T>& nodes) const {
    std::vector<T> n;
    if(node != NULL){
        postOrderTraversal(node -> left);
        postOrderTaversal(node -> right);
        n.push_back(node -> getRoot());
    }
    nodes = n;
}
}




