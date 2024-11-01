#include <algorithm>    // Provides copy function
#include <cassert>       // Provides assert function
#include "bag2.h"
using namespace std;

namespace cs270
{
    const bag::size_type bag::DEFAULT_CAPACITY;

    bag::bag(size_type initial_capacity)
    {
        data = new value_type[initial_capacity];
        capacity = initial_capacity;
        used = 0;
    }

    bag::bag(const bag& source)
    // Library facilities used: algorithm
    {
        data = new value_type[source.capacity];
        capacity = source.capacity;
        used = source.used;
        // strt_iter1, the pointer to the beginning of the source container
        // end_iter1, the pointer to the end of source container
        // strt_iter2, the pointer to the beginning of destination container
        // copy(strt_iter1, end_iter1, strt_iter2)
        copy(source.data, source.data + used, data);
    }

    bag::~bag( )
    {
	delete [ ] data;
    }

    void bag::reserve(size_type new_capacity)
    // Library facilities used: algorithm
    {
        value_type *larger_array;

        if (new_capacity == capacity)
            return; // The allocated memory is already the right size.

        if (new_capacity < used)
            new_capacity = used; // Can�t allocate less than we are using.

        larger_array = new value_type[new_capacity];

        copy(data, data + used, larger_array);
        delete [ ] data;
        data = larger_array;
        capacity = new_capacity;
    }
    
    bag::size_type bag::erase(const value_type& target)
    {
	size_type index = 0;
	size_type many_removed = 0;

	while (index < used)
	{
	    if (data[index] == target)
	    {
		--used;
		data[index] = data[used];
		++many_removed;
	    }
	    else
		++index;
	}

	return many_removed;
    }

    bool bag::erase_one(const value_type& target)
    {
	size_type index; // The location of target in the data array    

	// First, set index to the location of target in the data array,
	// which could be as small as 0 or as large as used-1.
	// If target is not in the array, then index will be set equal to used.
	index = 0;
	while ((index < used) && (data[index] != target))
	    ++index;

	if (index == used) // target isn't in the bag, so no work to do
	    return false;

	// When execution reaches here, target is in the bag at data[index].
	// So, reduce used by 1 and copy the last item onto data[index].
	--used;
	data[index] = data[used];
	return true;
    }

    void bag::insert(const value_type& entry)
    {   
        if (used == capacity)
            reserve(used+1);
        data[used] = entry;
        ++used;
    }
    
    void bag::operator +=(const bag& addend)
    // Library facilities used: algorithm
    {
        if (used + addend.used > capacity)
            reserve(used + addend.used);
        
        copy(addend.data, addend.data + addend.used, data + used);
	used += addend.used;
    }

    void bag::operator =(const bag& source)
    // Library facilities used: algorithm
    {
	value_type *new_data;

	// Check for possible self-assignment:
	if (this == &source)
            return;

	// If needed, allocate an array with a different size:
	if (capacity != source.capacity)
	{ 
	    new_data = new value_type[source.capacity];
	    delete [ ] data;
	    data = new_data;
	    capacity = source.capacity;
	}

	// Copy the data from the source array:
	used = source.used;
	copy(source.data, source.data + used, data);
    }

    bag::size_type bag::count(const value_type& target) const
    {
	size_type answer;
	size_type i;

	answer = 0;
	for (i = 0; i < used; ++i)
	    if (target == data[i])
		++answer;
	return answer;
    }

    bag operator +(const bag& b1, const bag& b2)
    {
	bag answer(b1.size( ) + b2.size( ));

	answer += b1; 
	answer += b2;
	return answer;
    }

}