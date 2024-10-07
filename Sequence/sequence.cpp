#include <iostream>
#include <cstdlib>
#include "sequence.h"
using namespace std;


namespace sequence_namespace{

void sequence::start(){
    current_index = data[0];
}


size_type sequence::size() const{
    return used;
}

}

