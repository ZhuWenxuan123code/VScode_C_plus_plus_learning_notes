#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main()
{
    // 使用for循环访问字符串
    string word = "Hello, World!";
    for (int i = word.size() - 1; i > 0; i--)
    {
        cout << word[i];
    }

    int guests = 0;
    while (guests++ < 10)
    {
        cout << "Welcome to the party!" << endl;
    }

    float sec = 2;
    clock_t delay = sec * CLOCKS_PER_SEC;
    clock_t start = clock();
    while (clock() - start < delay)
    {
        ;
    }
    cout << "waiting for two seconds:" << endl;
    return 0;
}