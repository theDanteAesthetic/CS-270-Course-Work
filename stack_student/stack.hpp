#ifndef STACK_HPP
#define STACK_HPP

namespace CS270 {
  template <class T>
  class stack{
    private:
      Node<T> *top_ptr;
      int count;
    public:
        stack();
       ~stack();
       void push(const T& data);  
       T pop();
       Node<T>* get_top() const {
            return top_ptr;
       }
       int size();
  };

}
#include "stack.ipp"


#endif