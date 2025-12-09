#include <iostream>
#include <climits>
#include <limits>
#define ZERO 0
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

	// test sizeof
	cout << "size of short is " << sizeof(short) << endl;
	cout << "size of int is " << sizeof(int) << endl;
	cout << "size of float is " << sizeof(float) << endl;
	cout << "size of double is " << sizeof(double) << endl;
	cout << "size of long is " << sizeof(long) << endl;
	cout << "size of long long is " << sizeof(long long) << endl;

	// test the boundary value of short
	// the range of short is -32768 to 32767
	// the range of unsigned short is 0 to 65535
	cout << "=====testing the boundary value of short type=====" << endl;
	short sam = SHRT_MAX;										 // initialize a variable to max value
	unsigned short sue = sam;									 // okay if variable sam already defined
	cout << "Sam has " << sam << " dollars and Sue has " << sue; // 32767 32768
	cout << " dollars deposited." << endl
		 << "Add $1 to each account." << endl
		 << "Now ";
	sam = sam + 1;
	sue = sue + 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited.\nPoor Sam!" << endl;
	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Take $1 from each account." << endl
		 << "Now ";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl
		 << "Lucky Sue!" << endl;

	return 0;
}
