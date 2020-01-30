// Interface for Array in CwC
// lang::CwC
#include <stdlib.h>
#include "object.h"

class Array : public Object
{
public:
	size_t hash_;
	size_t len_;
	Object *arr_;

	// constructor
	Array(size_t size)
	{
	}

	// destructor
	virtual ~Array()
	{
	}

	// hashes array
	size_t hash()
	{
	}

	// Removes the element at given index
	void remove(size_t index)
	{
	}

	// inserts given object at given index
	void insert(Object to_add, size_t index)
	{
	}

	// returns len_ value
	size_t len()
	{
	}

	// returns pointer to object at given index
	Object *get(size_t index)
	{
	}

	// returns true if array is empty, false if it not
	bool is_empty()
	{
	}

	// prints particular element at given index
	void print_index(size_t index)
	{
	}

	// prints entire array
	void print()
	{
	}

	// append given object to the array if there is space
	void append(Object to_add)
	{
	}
};
