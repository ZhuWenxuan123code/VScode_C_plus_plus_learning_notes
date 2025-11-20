#include <iostream>
#include <string>
using namespace std;
int main()
{
  // test if statement
  if (bool h = 20 < 10)
  {
    cout << "this is " << h << endl;
    cout << "20 < 10" << endl;
  }
  else
  {
    cout << "this is " << h << endl;
    cout << "20 >= 10" << endl;
  }

  // test ? : operator
  int time = 5;
  string result = (time < 10) ? "Good morning" : "Good evening";
  cout << result << endl;

  // test switch statement
  int day = 3;
  switch (day)
  {
  case 1:
    cout << "this is Day 1" << endl;
    break;
  case 2:
    cout << "this is Day 2" << endl;
    break;
  default:
    cout << "this is None" << endl;
  }
}