// Implement the methods from linkedList.hpp
#include "linkedList.hpp"


namespace CS270 {
    template <typename T>
    forward_list<T>::forward_list(){
        head_ = NULL;
    }

    template <typename T>
    forward_list<T>::forward_list(const forward_list& other){
        head_ = NULL;
        if(other != NULL){
            head_ = new Node<T> (other.get_head() -> getData(), NULL);
        }
    }

    template <typename T>
    forward_list<T>::~forward_list(){
        delete head_;
    }

    template <typename T>
    void forward_list<T>::push_front(const T& data){

    }

    template <typename T>
    void forward_list<T>::pop_front(){

    }

}