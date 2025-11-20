#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  try
  {
    int age = 15;
    if (age >= 18)
    {
      cout << "Access granted - you are old enough.";
    }
    else
    {
      throw(age);
    }
  }
  catch (int myNum)
  {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum << endl;
  }
  try
  {
    int age = 15; // throw 505
    if (age >= 18)
    {
      cout << "Access granted - you are old enough.";
    }
    else
    {
      throw "You must be at least 18 years old.";
    }
  }
  catch (...) // const char *msg
  {
    cout << "Access denied - " << endl;
  }
  return 0;
}