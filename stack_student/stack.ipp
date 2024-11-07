#include <cstdlib>
namespace CS270 {

    template <typename T>
    stack<T>::stack(){
        top_ptr = NULL;
        count = 0;
    }

    template <typename T>
    stack<T>::~stack(){
        while (top_ptr != NULL){
            pop();
        }
    }

    template <typename T>
    void stack<T>::push(const T& data){
        top_ptr = new Node<T>(data, top_ptr);
        count ++;
    }

    template <typename T>
    T stack<T>::pop(){
        T value = get_top() -> getData();
        Node<T>* temp = top_ptr;
        top_ptr = get_top() -> getNext();
        count --;
        delete temp;
        return value;

    }

    template <typename T>
    int stack<T>::size(){
        return count;
    }
}