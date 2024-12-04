template <typename T>
BinarySearchTree<T>::BinarySearchTree(): root(NULL){}

template <typename T>
BinarySearchTree<T>::~BinarySearchTree(){
    deleteTree(root);
}


template <typename T>
bool BinarySearchTree<T>::search(const T& value) const{
    return searchRecursive(root, value);
}

template <typename T>
bool BinarySearchTree<T>::searchRecursive(BinaryNode<T>* node, const T& value) const{
    if(node == NULL) {
        return false;
    }
    if(node -> getValue() == value){
        return true;
    }
    if(value < (node -> getValue())){
        return searchRecursive(node -> getLeft(), value);
    }
    else {
        return searchRecursive(node -> getRight(), value);
    }
}



template <typename T>
void BinarySearchTree<T>::insert(const T& value){
    root = insertRecursive(root, value);
}

template <typename T>
BinaryNode<T>* BinarySearchTree<T>::insertRecursive(BinaryNode<T>* node, const T& value){
    if (node == NULL){
        return new BinaryNode(value);
    }

    if(value < node -> getValue()){
        node -> setLeft(insertRecursive(node -> getLeft(), value));
    } else {
        node -> setRight(insertRecursive(node -> getRight(), value));
    }
    return node;
}



template <typename T>
void BinarySearchTree<T>::remove(const T& value){
    root = removeRecursive(root, value);
}

template <typename T>
BinaryNode<T>* BinarySearchTree<T>::removeRecursive(BinaryNode<T>* node, const T& value){
    BinaryNode<T>* temp = NULL;
    if(node == NULL){
        return NULL;
    }

    if(value < (node -> getValue())){
        node -> setLeft(removeRecursive(node -> getLeft(), value));
    }
    else if(value > (node -> getValue())){
        node -> setRight(removeRecursive(node -> getRight(), value));
    }
    else{
        if((node -> getLeft()) == NULL && (node -> getRight()) == NULL){
            delete node;
            return NULL;
        }

        if((node -> getLeft()) == NULL){
            temp = node -> getRight();
            delete node;
            return temp;
        }

        if((node -> getRight()) == NULL){
            temp = node -> getLeft();
            delete node;
            return temp;
        }

        temp = findMin(node -> getRight());
        node -> setValue(temp -> getValue());
        node -> setRight(removeRecursive((node -> getRight()), (temp -> getValue())));
    }
    return node;
}


template <typename T>
BinaryNode<T>* BinarySearchTree<T>::findMin(BinaryNode<T>* node) {
    while((node -> getLeft()) != NULL){
        node -> setLeft(node -> getLeft());
    }
    return node;
}

template <typename T>
void BinarySearchTree<T>::inOrderTraversal() const {
    inOrderTraversal(root);
}

template <typename T>
void BinarySearchTree<T>::inOrderTraversal(BinaryNode<T>* node) const {
    if (node != NULL) {
        inOrderTraversal(node->getLeft());
        std::cout << node->getValue() << " ";
        inOrderTraversal(node->getRight());
    }
}

template <typename T>
void BinarySearchTree<T>::deleteTree(BinaryNode<T>* node) {
    if (node != NULL) {
        deleteTree(node->getLeft());
        deleteTree(node->getRight());
        delete node;
    }
}
