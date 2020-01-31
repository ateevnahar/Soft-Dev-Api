// Interface for Array in CwC
// lang::CwC
#include <stdlib.h>
#include "object.h"

class Array : public Object
{
public:

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

	// returns len_ value
	size_t len()
	{
	}

	// returns true if array is empty, false if it not
	bool is_empty()
	{
	}

	// prints particular element at given index
	virtual void print_index(size_t index)
	{
	}

	// prints entire array
	virtual void print()
	{
	}
};

class IntArray : public Array
{
public:
	// constructor
	IntArray(size_t size)
	{
	}

	// destructor
	~IntArray()
	{
	}

	// inserts given object at given index
	void insert(int *to_add, size_t index)
	{
	}

	// returns pointer to object at given index
	int *get(size_t index)
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
	void append(int *to_add)
	{
	}
};

class BoolArray : public Array
{
public:
	// constructor
	BoolArray(size_t size)
	{
	}

	// destructor
	~BoolArray()
	{
	}

	// inserts given object at given index
	void insert(bool *to_add, size_t index)
	{
	}

	// returns pointer to object at given index
	bool *get(size_t index)
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
	void append(bool *to_add)
	{
	}
};

class FloatArray : public Array
{
public:
	// constructor
	FloatArray(size_t size)
	{
	}

	// destructor
	~FloatArray()
	{
	}

	// inserts given object at given index
	void insert(float *to_add, size_t index)
	{
	}

	// returns pointer to object at given index
	float *get(size_t index)
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
	void append(float *to_add)
	{
	}
};

class StringArray : public Array
{
public:
	// constructor
	StringArray(size_t size)
	{
	}

	// destructor
	~StringArray()
	{
	}

	// inserts given object at given index
	void insert(String *to_add, size_t index)
	{
	}

	// returns pointer to object at given index
	String *get(size_t index)
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
	void append(String *to_add)
	{
	}
};