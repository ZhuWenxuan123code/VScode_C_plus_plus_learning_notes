#include <iostream>
using namespace std;
// 再添加关键字typename之前，C++使用关键字 class 来创建模板如下：
// 关键字typename和 class 在模板函数中是等价的，尽量使用typename
template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = b;
    b = a;
    a = temp;
}
int main()
{
    int num1 = 1;
    int num2 = 2;
    cout << "num1:" << num1 << endl;
    cout << "num2:" << num2 << endl;
    Swap(num1, num2);
    cout << "num1:" << num1 << endl;
    cout << "num2:" << num2 << endl;
    extern const int errors;
    cout << "errors:" << errors << endl;
    extern int ok;
    cout << "ok:" << ok << endl;
    // test.cpp file
    // extern const int errors = 20;
    // int ok = 10;
    return 0;
}