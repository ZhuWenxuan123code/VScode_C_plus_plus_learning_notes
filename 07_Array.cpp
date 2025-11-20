#include <iostream>
#include <string>
#define Array_size(array) (sizeof(array) / sizeof(array[0])) // get array size
using namespace std;
int main()
{
	// test array
	string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"}; // fixed size
	string bands[] = {"Metallica", "Slipknot", "Korn"}; // auto size
	int myNums[3] = {10, 20, 30};
	cout << "cars[0] = " << cars[0] << endl;
	for (int i = 0; i < Array_size(myNums); i++)
	{
		cout << "myNums[" << i << "] = " << myNums[i] << endl;
	}
}