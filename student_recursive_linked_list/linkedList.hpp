
#ifndef FORWARD_LIST_HPP
#define FORWARD_LIST_HPP

namespace CS270{
  template <class T>
  class forward_list{
    public:
       forward_list();
       ~forward_list();
       void push_front(const T& data);  
       void pop_front();
       // This method count the number of nodes if the forward linked list
       // Implement this method
       int count_nodes();
       // This search if a value exists in the forward linked list
       // Implement this method
       bool search(T value);
       Node<T>* get_front() const {
            return head_;
       }
    private:
      Node<T> *head_;
      // Recursive calls
      // Implement these methods
      int count_nodes_recursive(Node<T>* node);
      bool search_recursive(Node<T>*, T value);

  };

}
#include "linkedList.ipp"


#endif