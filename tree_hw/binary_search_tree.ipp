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
template <typename T> //Allows the following function to use any data type as an input
typename BinarySearchTree<T>::BinaryNode* BinarySearchTree<T>::insertRecursive(BinaryNode* node, const T& value){ //takes in two parameters: 1. A Binary Node that acts as the root and 2. a value to insert.
    if(node == NULL){ //if there is no node return a new node with the inputed value
        return new BinaryNode(value);
    }
    if(value > node -> value){ //if the inputed value is greater than the value of the current node return the function with the node being the right child of the current node and the value staying the same
        return insertRecursive(node -> right, value);
    }
    else{ //otherwise return the function with the node being the left child of the current node and the inputed value staying the same.
        return insertRecursive(node -> left, value);
    }
}



template <typename T>
std::vector<T> BinarySearchTree<T>::preOrderTraversal() const {
    std::vector<T> nodes;
    preOrderTraversal(root, nodes);
    return nodes;
}

// TO DO
template <typename T> //Allows the following function to use any data type as an input
void BinarySearchTree<T>::preOrderTraversal(BinaryNode* node, std::vector<T>& nodes) const { //Takes in a node and a vector of nodes as parameter
    std::vector<T> temp; //Creates a temporary vector to to reorder the nodes in the current vector
    if(node != NULL){ //runs only when there are nodes
        //preOrderTraversal starts with the root and then goes to the left subtree and then to the right
        n.push_back(node -> value); //treats the current node as the root and pushes it into the end of the vector
        preOrderTraversal(node -> left, nodes); //runs the function with the left child of the current node
        preOrderTraversal(node -> right, nodes); //after it runs through the left subtree it goes to the right and runs again
    }
    nodes = temp; //sets the value of the inputed vector to the temporary vector we created earlier
}

template <typename T>
std::vector<T> BinarySearchTree<T>::inOrderTraversal() const {
    std::vector<T> nodes;
    inOrderTraversal(root, nodes);
    return nodes;
}

// TO DO
template <typename T> //Allows the following function to use any data type as an input
void BinarySearchTree<T>::inOrderTraversal(BinaryNode* node, std::vector<T>& nodes) const{ //Takes in a node and a vector of nodes as parameter
    std::vector<T> temp; //Creates a temporary vector to to reorder the nodes in the current vector
    if(node != NULL){ //runs only when there are nodes
        //inOrderTraversal starts with the left subtree and works its way up through the root and then down the right subtree
        inOrderTraversal(node -> left, nodes); //runs the function with the left child of the current node
        n.push_back(node -> value); //treats the current node as the root and pushes it into the end of the vector
        inOrderTraversal(node -> right, nodes); //after it runs through the left subtree and back through the root it goes to the right and runs again
    }
    nodes = temp; //sets the value of the inputed vector to the temporary vector we created earlier
}

template <typename T>
std::vector<T> BinarySearchTree<T>::postOrderTraversal() const {
    std::vector<T> nodes;
    postOrderTraversal(root, nodes);
    return nodes;
}

// TO DO
template <typename T> //Allows the following function to use any data type as an input
void BinarySearchTree<T>::postOrderTraversal(BinaryNode* node, std::vector<T>& nodes) const { //Takes in a node and a vector of nodes as parameter
    std::vector<T> temp; //Creates a temporary vector to to reorder the nodes in the current vector
    if(node != NULL){ //runs only when there are nodes
        //postOrderTraversal begins with the left subtree then the right subtree and ends with the root
        postOrderTraversal(node -> left, nodes); //runs the function with the left child of the current node
        postOrderTraversal(node -> right, nodes); //after it runs through the left subtree it goes to the right and runs again
        n.push_back(node -> value); //treats the current node as the root and pushes it into the end of the vector
    }
    nodes = temp; //sets the value of the inputed vector to the temporary vector we created earlier
}
}