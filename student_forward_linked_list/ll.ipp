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
        head = new Node<T>(v, head);
}

template <typename T>
T& forward_list<T>::front(){
        return head.data;
}

template <typename T>
void forward_list<T>::pop_front(){
        Node<T>* temp = head;
        head = head.data -> head.next;
        delete temp;
}

template <typename T>
bool forward_list<T>::empty(){
        if(head == NULL){
                return true;
        }
        else {
                return false;
        }
}

template <typename T>
void remove(const T& val){
        while(head != NULL){
                if(head == val){
                        pop_front();
                }
                head = head.data -> head.next;
        }
}
}
