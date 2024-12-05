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
        head = new Node(v, head);
}

template <typename T>
T& forward_list<T>::front(){
        return head -> data;
}

template <typename T>
void forward_list<T>::pop_front(){
        Node* temp = head;
        head = head -> next;
        delete temp;
}

template <typename T>
bool forward_list<T>::empty(){
        if(head == NULL){
                return true;
        } else {
                return false;
        }
}

template <typename T>
void forward_list<T>::remove(const T& val){
        while(head != NULL){
                if((head -> data) == val){
                        pop_front();
                }
                head = head -> next;
        }
}
}