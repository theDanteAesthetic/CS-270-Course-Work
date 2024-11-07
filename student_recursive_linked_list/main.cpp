#include <iostream>
#include "node.hpp"
#include "linkedList.hpp"
using namespace std;
using namespace CS270;
int main() { 

    forward_list<int> first_forward_list;
    first_forward_list.push_front(1);
    first_forward_list.push_front(2);    
    first_forward_list.push_front(3);
    first_forward_list.push_front(4);
   
    // Test in the console the functions count and search for the number 3 and 5 
    cout << first_forward_list.count_nodes() << endl;
    cout << first_forward_list.search(6) << endl;
    return 0;
}