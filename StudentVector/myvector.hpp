#ifndef MAIN_VECTOR
#define MAIN_VECTOR
#include <cstdlib>  // Provides size_t

namespace my_vector{

    template <typename T>
    class myVector{
        public:
            // Constructor
            myVector();
            // Destructor
            ~myVector();
            // Access
            // Element Access
            T& operator[](std::size_t index);
            // Capacity
            std::size_t size() const;
            std::size_t capacity() const;
            void reserve(std::size_t new_capacity);
            // Modifiers
            void push_back(const T& value);
            void pop_back();
        private:
          T* data;
          std::size_t size_;
          std::size_t capacity_;
    };
}

#include "myvector.ipp"

#endif