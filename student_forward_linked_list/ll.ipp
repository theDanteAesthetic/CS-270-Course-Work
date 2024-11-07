namespace CS270 {

template <typename T>
forward_list<T>::forward_list() {
        head = NULL;
}

template <typename T>
forward_list<T>::~forward_list() {
        delete head;
}

}
