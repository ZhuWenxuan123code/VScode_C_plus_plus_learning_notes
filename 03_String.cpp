#include <iostream>
#include <string>
using namespace std;
int main()
{
	string first_name = "ZHU";
	string last_name = "WenXuan";
	cout << "full name = " << first_name + " " + last_name << endl;
	cout << "full name = " << first_name.append(last_name) << endl;
	string full_name = first_name + " " + last_name;
	cout << "full name length = " << full_name.length() << endl;
	cout << "full name length = " << full_name.size() << "\n";
	cout << endl;

	// change specific character
	cout << "change specific character" << endl;
	cout << "full name = " << full_name << endl;
	full_name[0] = 'A';
	cout << "full name = " << full_name << endl;
	return 0;
}