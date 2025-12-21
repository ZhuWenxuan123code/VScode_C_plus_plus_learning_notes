#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Hello, World!" << endl;
    string name;
    cout << "Enter your name: ";
    // 有不同的方法来输入 string 类型
    getline(cin, name); // 为什么不是cin.get()？
    // cin >> name; // 这种方法遇到空格会截断
    cout << "Hello, " << name << "!" << endl;
    return 0;
}