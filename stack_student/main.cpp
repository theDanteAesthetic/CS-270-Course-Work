#include <iostream>
#include "node.hpp"
#include "stack.hpp"
using namespace std;
using namespace CS270;
int main() { 
    stack<int> stack_;
    stack_.push(5);
    stack_.push(10);
    stack_.push(45);

    cout << stack_.size() << endl;
    while(stack_.get_top() != NULL){
        cout << stack_.pop() << endl;
    }
    return 0;
}