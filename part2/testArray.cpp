
#include "object.h" // Your file with the CwC declaration of Object
#include "string.h" // Your file with the String class
#include "array.h"  // array file
void FAIL() { exit(1); }
void OK(const char *m)
{ /** print m */
}
void t_true(bool p)
{
  if (!p)
    FAIL();
}
void t_false(bool p)
{
  if (p)
    FAIL();
}
void test1()
{
  String *s = new String("Hello");
  String *t = new String("World");
  StringArray *test = new StringArray(3);
  test->append(s);
  test->append(t);
  test->insert(t, 2);
  t_true(test->get(0) == s);
  t_true(test->len == 3);
      OK("1");
}
void test2()
{
  String *s = new String("Hello");
  String *t = new String("World");
  StringArray *test = new StringArray(3);
  test->append(s);
  test->append(t);
  test->insert(t, 2);
  test->remove(2);
  t_true(test->get(2) == nullptr);
  OK("2");
}
void test3()
{
  String *s = new String("Hello");
  Object *t = new String("World");
  StringArray *test1 = new StringArray(2);
  StringArray *test2 = new StringArray(2);
  test1->append(s);
  test2->append(s);
  test1->insert(t, 1);
  test2->insert(t, 1);
  t_true(test1->hash() == test2->hash());
  OK("3");
}
void test4()
{
  Array * array = new IntArray(10);
  t_false(null->is_empty());
  Array * array2 = new IntArray(10);
  int s = 2;
  int q = 3;
  int w = 4;
  array->append(s);
  array2->append(s);
  array->append(q);
  array2->append(q);
  array->insert(w,1);
  array2->insert(w,1);
  t_true(test1->hash() == test2->hash());
  OK("4");
}
void test5()
{
  Array * arraybool = new BoolArray(10);
  bool p = true;
  bool e = false;
  bool r = true;
  arraybool->append(p);
  arraybool->append(e);
  arraybool->append(r);
  t_true(arraybool->get(2) == true);
  OK("5");
}
void test6()
{
  Array * arrayfloat = new FloatArray(10);
  bool p = 5.0;
  bool e = 3.0;
  bool r = 2.3;
  arrayfloat->append(p);
  arrayfloat->append(e);
  arrayfloat->append(r);
  t_true(arrayfloat->get(2) == 2.3);
  t_false(null->is_empty());
  OK("6");
}
int main()
{
  test1();
  test2();
  test3();
  test4();
  test5();
  test6();
  return 0;
}
