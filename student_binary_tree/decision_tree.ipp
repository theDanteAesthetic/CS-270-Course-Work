template <typename T>
DecisionTree<T>::DecisionTree(): BinaryTree<T>(){}

template <typename T>
void DecisionTree<T>::traverse() const {
    BinaryNode<T>* currentNode = this -> root;

    while (currentNode != NULL){
        std::cout << currentNode -> getValue() << " (yes/no)";
        std::string response;
        std::getline(std::cin, response);

        if (response == "yes"){
            currentNode = currentNode -> getLeft();
        } 
        else if (response == "no") {
            currentNode = currentNode -> getRight();
        }
        else {
            std::cout << "Invalid responce. Please answer with yes or no \n";
        }
    }
}