#include <iostream>
#include <climits>
using namespace std;
int main()
{
  unsigned int a = 5;
  // unsigned and signed int value range
  std::cout << "Unsigned short value range\nfrom "
            << 0 << " to " << USHRT_MAX << std::endl; // line break with "\n"
  std::cout << "signed short value range\nfrom " << SHRT_MIN << " to " << SHRT_MAX << std::endl;

  // test char
  char word = 'a';
  cout << "word = " << word << endl;

  // test float
  float f = 3.14;
  cout << "f = " << f << endl;

  // test cin
  cin >> a;
  cout << "a = " << a << endl;

  // test cout
  cout << "i am ok" << endl;
  return 0;
}
