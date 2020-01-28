//lang::CwC
#pragma once
#include "object.h"
#include <stdlib.h>
#include <string.h>

// inherits from the object class
class String: public Object {
		public:
    char* val_;
    size_t size_;

  // constructor
  String(char* val) {
  }

	// constructor for const
  String(const char* val) {
  }

	// destructor 
  ~String() {
  }

	// hashing func (memoized)
  size_t hash_me() {
  }
  
	// used to compare strings
	bool equals(Object *o) {
  }

	// optional, use to print a string
	void print() {
	
	}
	// optional unneeded for this assignment
	// but used to concat
	String* concat(String* c) {
	}
};
