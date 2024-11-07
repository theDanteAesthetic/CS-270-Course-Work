#include <cstdlib>
namespace CS270{

    template <typename T>
    queue<T>::queue(){
        front_ptr = NULL;
        rear_ptr = NULL;
        count=0;
    }

    template <typename T>
    queue<T>::~queue(){
        while (front_ptr != NULL && rear_ptr != NULL) {
            pop();
        }
    }

    template <typename T>
    int queue<T>::size(){
        return count;
    }
    template <typename T>
    void queue<T>::push(const T& data){
        Node<T>* newNode = new Node<T>(value, NULL)
        if(front_ptr == NULL && rear_ptr == NULL){
            front_ptr = newNode;
        } else {
            rear_ptr -> getNext() = newNode;
        }
        rear_ptr = newNode;
        count++;
    }

    template <typename T>
    T queue<T>::pop(){
        T value = get_front() -> getData();
        Node<T>* temp = front_ptr;
        if(front_ptr != NULL && (front_ptr == rear_ptr)){
            front_ptr = NULL;
            rear_ptr = NULL;
        } else {
            front_ptr = get_front() -> getNext();

        }
        count--;
        delete temp;
        return value;
    }
  

   

}