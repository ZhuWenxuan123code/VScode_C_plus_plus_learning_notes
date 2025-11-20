#include <iostream>
using namespace std;
void myFunction1(string fname, int age); // function prototype
void swap1(int &x, int &y);              // reference
void swap2(int *x, int *y);              // pointer
int main()
{
  // function
  cout << "function" << endl;
  myFunction1("Liam", 3);
  myFunction1("Jenny", 5);
  cout << "++++++++++++++++++ test swap1 ++++++++++++" << endl;
  int a = 5;
  int b = 3;
  cout << "a = " << a << " b = " << b << endl;
  swap1(a, b);
  cout << "a = " << a << " b = " << b << endl;
  cout << "++++++++++++++++ test swap2 ++++++++++++++" << endl;
  cout << "a = " << a << " b = " << b << endl;
  swap2(&a, &b);
  cout << "a = " << a << " b = " << b << endl;
  return 0;
}
void myFunction1(string fname = "ZHU", int age = 2) // default value
{
  cout << "this name is " << fname << endl;
}
void swap1(int &x, int &y)
{
  int z = x;
  x = y;
  y = z;
}
void swap2(int *x, int *y)
{
  int z = *x;
  cout << "temp z = " << z << endl;
  *x = *y;
  *y = z;
}
// function overloading
void myFunction1(string fname)
{
  cout << "this name is " << fname << endl;
}
void myFunction1(int age)
{
  cout << "this age is " << age << endl;
}