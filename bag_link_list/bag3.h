#ifndef MAIN_BAG_LINKED_LIST
#define MAIN_BAG_LINKED_LIST
#include <cstdlib>   // Provides size_t and NULL
#include "node1.h"   // Provides node class
namespace MAIN_CS270
{
    class bag
    {
    public:
        // TYPEDEFS
        typedef std::size_t size_type;
        typedef node::value_type value_type;
        // CONSTRUCTORS and DESTRUCTOR
        bag( );
        bag(const bag& source);
	~bag( );
        // MODIFICATION MEMBER FUNCTIONS
        size_type erase(const value_type& target);
        bool erase_one(const value_type& target);
        void insert(const value_type& entry);
        void operator +=(const bag& addend);
        void operator =(const bag& source);
        // CONSTANT MEMBER FUNCTIONS
        size_type size( ) const { return many_nodes; }
        size_type count(const value_type& target) const;
        value_type grab( ) const;
    private:
        node *head_ptr;       // List head pointer 
        size_type many_nodes; // Number of nodes on the list
    };

    // NONMEMBER FUNCTIONS for the bag class:    
    bag operator +(const bag& b1, const bag& b2);
}
#endif