#include <iostream>
using namespace std;
int main()
{
  // pointer
  int a = 1;
  cout << "tpye = " << typeid(a).name() << endl;
  string food = "pizza";
  string &meal = food; // meal 的地址和 food 的地址是一样的
  cout << "food = " << food << endl;
  cout << "meal = " << meal << endl;
  cout << "food address = " << &food << endl;
  cout << "meal address = " << &meal << endl;
  cout << "====================" << endl;
  string *ptr = &food;                    // ptr 的值是一个地址
  cout << "ptr = " << ptr << endl;        // ptr is a address
  cout << "ptr value = " << *ptr << endl; // *ptr is a value of its address
  *ptr = "hamburger";                     // equal to food = "hamburger"
  cout << "food = " << food << endl;
  cout << "food = " << *ptr << endl;

  return 0;
}