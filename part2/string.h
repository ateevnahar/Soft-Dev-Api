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
		int count_;
/*
  // constructor
  String(char* val) {
    size_ = strlen(val); // lib func
    val_ = new char[size_];
    for(size_t i = 0; i < size_; i++) {
      val_[i] = val[i];
    }
  }
*/
	// constructor for const
  String(const char* val) {
    size_ = strlen(val);  // lib func
    val_ = new char[size_ + 1];
    for(size_t i = 0; i < size_; i++) {
      val_[i] = val[i];
    }
		val_[size_] = '\0';
		count_ = 1;
  }

	// destructor 
  ~String() {
    delete[] val_;
  }

	// hashing func (memoized)
  size_t hash_me() {
    size_t res = 0;
    for (size_t i = 0; i < size_; i++) {
      res = res + val_[i];
    }
    return res;
  }
//	void inc_count() {
//	count_++;
//	}
	// equals func
  bool equals(Object *o) {
    if (o == nullptr) {
      return false;
    }
    String *s = dynamic_cast<String*>(o);

    if(s == nullptr) {
      return false;
    }

    return strcmp(val_, s->val_) == 0;
  }

	String* concat(String* c) {
		size_t concatSize = c->size_ + size_;
		char* concated = new char[concatSize + 1];
		strcpy(concated, val_);
		strcat(concated, c->val_);
		concated[concatSize] = '\0';
		return new String(concated);
	}
};
