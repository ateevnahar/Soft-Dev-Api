//lang::CwC
#pragma once
#include <stdlib.h>
#include <iostream>

class Object {

		public:
		size_t hash_;

		Object() { 
				hash_ = 0;
		}
		
		// deconstructor
		virtual ~Object() {

		}

		// the virtual means it is overiddable 
		virtual bool equals (Object* other) {
				return this == other; 
		}

		size_t hash() {
				if (hash_ == 0) {
						hash_ = hash_me();
				}

				return hash_;
		}

		virtual size_t hash_me () {
				return reinterpret_cast<size_t> (this);
		}
};
