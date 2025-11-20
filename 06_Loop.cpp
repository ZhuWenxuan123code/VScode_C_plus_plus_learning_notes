#include <iostream>
using namespace std;
int main()
{
  // while
  int i = 0;
  while (i < 5)
  {
    cout << "i = " << i << endl;
    i++;
  }
  cout << "====================" << endl;

  // do while
  int j = 0;
  do
  {
    cout << "j = " << j << endl;
    j++;
  } while (j < 5); // there must be a semicolon here

  cout << "====================" << endl;
  // for
  for (int k = 0; k <= 5; k++)
  {
    cout << "k = " << k << endl;
    if (k == 3)
    {
      break;
      // continue;
    }
  }
}
