#ifndef QUEUE_HPP
#define QUEUE_HPP

namespace CS270{
  template <class T>
  class queue {
    private:
      Node<T> *front_ptr; // Head
      Node<T> *rear_ptr; // Tail
      int count;
    public:
        queue();
       ~queue();
       void push(const T& data);  
       T pop();
       Node<T>* get_front() const {
            return front_ptr;
       }
       int size();
  };

}
#include "queue.ipp"


#endif