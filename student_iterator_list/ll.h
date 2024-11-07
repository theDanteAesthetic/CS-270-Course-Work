#include <cstddef>

namespace CS270 {
template<class T>
class forward_list {
 private:
  class Node {
   public:
    T val;
    Node* next;
    Node(const T& v) : val(v), next(NULL) {}
  };
  
  class iterator {
   private:
    Node* n;
   public:
    iterator(Node* node) : n(node) {}
    T& operator*() {return n -> val;}
    bool operator!=(const iterator& other) {return n != other.n;}
    void operator++() {n = n -> next;}
  };

  //Pointer to the beginning of the linked list
  Node* head;

  //Prevent copy and assignment by declaring private functions
  forward_list(forward_list& other);
  forward_list& operator=(forward_list& other);

 public:
  forward_list();

  //Functions to support the iterator interface
  iterator begin();
  iterator end();

  //Insert an item at the beginning of the list
  void push_front(const T& v);

  //Returns the value at the head of the list
  T& front();

  //Remove the first item from the list
  void pop_front();

  //Is the list empty?
  bool empty();

 
};

}

#include "ll.ipp"
