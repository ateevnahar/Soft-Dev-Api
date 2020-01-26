#include "object.h"  // Your file with the CwC declaration of Object
#include "string.h"  // Your file with the String class
#include "array.h"   // array file
 
void FAIL() {   exit(1);    }
void OK(const char* m) { /** print m */ }
void t_true(bool p) { if (!p) FAIL(); }
void t_false(bool p) { if (p) FAIL(); }
 
void test1() {
  String * s = new String("Hello");
  String * t = new String("World");
  Array * test = new Array(3);
	test->append(s);
	test->append(t);
	test->insert(t, 2);
	t_true(test->get(0) == s);
	t_true(test->len == 3)
  OK("1");
}
 
void test2() {
  String * s = new String("Hello");
  String * t = new String("World");
  Array * test = new Array(3);
	test->append(s);
	test->append(t);
	test->insert(t, 2);
	test->remove(2);
	t_true(test->get(2) == nullptr);
  OK("2");
}
 
void test3() {
  String * s = new String("Hello");
  Object * t = new String("World");
  Array * test1 = new Array(2);
  Array * test2 = new Array(2);
	test1->append(s);
	test2->append(s);
	test1->insert(t, 1);
	test2->insert(t, 1);
  t_true(test1->hash() == test2->hash());
  
	OK("3");
}
 
void test4() {
  Array * null();
	t_true(null->is_empty);
	OK("4");
}
 
int main() {
  test1();
  test2();
  test3();
  test4();
  return 0;
}
