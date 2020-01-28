//lang::CwC
#pragma once
#include <stdlib.h>
#include <iostream>

class Object {

		public:
		size_t hash_;

		// constructor
		Object() { 
		}
		
		// deconstructor
		virtual ~Object() {
		}

		// the virtual means it is overiddable 
		virtual bool equals (Object* other) {
		}

		// returns a hash value
		virtual size_t hash() {
				if (hash_ == 0) {
						hash_ = hash_me();
				}

				return hash_;
		}

		// returns a hash
		virtual size_t hash_me () {
				return reinterpret_cast<size_t> (this);
		}

		// prints this object
		virtual void print() {
		}
};
