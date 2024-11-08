namespace CS270 {

template <typename T>
forward_list<T>::forward_list() {
        head = NULL;
}

template <typename T>
forward_list<T>::~forward_list() {
        delete head;
}

template <typename T>
void forward_list<T>::push_front(const T& v){
        head = new Node(v, head); //sets the first item to a new node with a value of v pointing to the previous first item
}

template <typename T>
T& forward_list<T>::front(){
        return head -> data; //returns the data of the first item
}

template <typename T>
void forward_list<T>::pop_front(){
        Node* temp = head; //sets a temporary variable to the first value
        head = head -> next; //sets the first item to the next item 
        delete temp; //deletes the first item
}

template <typename T>
bool forward_list<T>::empty(){
        if(head == NULL){
                return true; //if there is no first item, it is empty
        } else {
                return false; //otherwise it is not empty
        }
}

template <typename T>
void forward_list<T>::remove(const T& val){
        while(head != NULL){ //only run while there are items to check
                if((head -> data) == val){ //if the data of the first value is the inputed value remove the first item using pop_front()
                        pop_front();
                }
                head = head -> next; //move the head to the next item so that you can check the next item
        }
}
}