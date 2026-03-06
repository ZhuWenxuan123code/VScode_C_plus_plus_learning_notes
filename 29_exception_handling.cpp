#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!" << endl;
    cout << "Enter,x:";
    int x;
    cin >> x;
    cout << "Enter,y:";
    int y;
    cin >> y;
    // 此处需要进行异常处理，防止除数为0的情况
    int average = 2.0 * x * y / (x + y);
    cout << "Average: " << average << endl;

    return 0;
}