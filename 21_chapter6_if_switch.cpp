#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int a;
    a = 10;
    if (a)
    {
        cout << "a is non-zero" << endl;
    }
    else
    {
        cout << "a is zero" << endl;
    }

    int num;
    cout << "请输入一个数字: ";

    while (!(cin >> num))
    {
        // 1. 发现输入错误，cin 进入 fail 状态
        cout << "输入错误！请输入有效的整数: ";

        // 2. 清除错误标记，让 cin 恢复工作
        cin.clear();

        // 3. 彻底丢弃缓冲区中导致错误的垃圾字符（直到换行符）
        // cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 如果没有这行，那么会死循环，一直输出"输入错误！请输入有效的整数: "

        // 另一种方法
        while (cin.get() != '\n')
            continue;
    }

    cout << "你输入的数字是: " << num << endl;
}