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


    // 原始字符串  在原始字符串中，反斜杠和引号不需要转义，字符表示的就是自己，但是需要R前缀
    cout << R"(This is a "raw" string. "\n" New line is not processed.)" << endl;
    return 0;
}