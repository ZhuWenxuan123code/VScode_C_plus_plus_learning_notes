#include <iostream>
using namespace std;
int main()
{
	int a = 5;
	int b = 3;
	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;
	cout << "a % b = " << a % b << endl;
	cout << "a++ = " << a++ << endl;
	cout << "++a = " << ++a << endl;
	int res = a *= b;
	cout << "a *= b = " << res << endl;

	// follow return boolean value
	// in C++, 0 is false, 1 is true
	cout << "a == b = " << (a == b) << endl;
	cout << "a != b = " << (a != b) << endl;
	cout << "a > b = " << (a > b) << endl;
	cout << "a < b = " << (a < b) << endl;
	cout << "a >= b = " << (a >= b) << endl;

	cout << (true && false) << endl;
	cout << (true || false) << endl;
	return 0;
}