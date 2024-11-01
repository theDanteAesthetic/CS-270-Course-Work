// Default constructor
// forward_list();
// Copy Constructor
// forward_list(const forward_list& other);
// Destructor
//  ~forward_list();
// Push front element
// push_front(const T& data);
// Pop front element
// pop_front();


#ifndef FORWARD_LIST_HPP
#define FORWARD_LIST_HPP

namespace CS270{
  template <class T>
  class forward_list{
    private:
      Node<T> *head_;
    public:
       forward_list();
       forward_list(const forward_list& other);
       ~forward_list();
       void push_front(const T& data);  
       void pop_front();
       Node<T>* get_head() const {
            return head_;
       }
       void set_head(Node<T> *head){
           head_ = head;
       }
  };

}
#include "linkedList.ipp"


#endif