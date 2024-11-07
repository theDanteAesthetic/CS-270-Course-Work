namespace CS270 {

//Constructor
template<class T>
forward_list<T>::forward_list() {
  head = NULL;
}

//Check if list is empty
template<class T>
bool forward_list<T>::empty() {
  return head == NULL;
}

template<class T>
T& forward_list<T>::front() {
  return head->val;
}

//Add an item
template<class T>
void forward_list<T>::push_front(const T& v) {
  Node* first = new Node(v);
  first->next = head;
  head = first;
}

template<class T>
void forward_list<T>::pop_front() {
  Node* toDelete = head;
  head = head->next;
  delete toDelete;
}


template<class T>
typename CS270::forward_list<T>::iterator forward_list<T>::begin() {
  return iterator(head);
}

template<class T>
typename CS270::forward_list<T>::iterator forward_list<T>::end() {
  return iterator(NULL);
}
}
