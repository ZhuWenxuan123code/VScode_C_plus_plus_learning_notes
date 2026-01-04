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

    float sec = 1;
    clock_t delay = sec * CLOCKS_PER_SEC;
    clock_t start = clock();
    while (clock() - start < delay)
    {
        ;
    }
    cout << "waiting for two seconds:" << endl;

    // 基于范围的for循环（C++11）
    double scores[] = {98.5, 76.3, 89.4, 100.0, 67.5};
    // for (double &score : scores)
    // {
    //     cin >> score;
    // }
    for (double score : scores)
    {
        cout << score << endl;
    }
    while (cin.fail() == false) // Windows结束条件
    {
        int number;
        cin >> number;
        cout << "You entered: " << number << endl;
    }
    while (cin.get()) // while(cin) 也可以
    {
        cout << "enter success!" << endl;
    }
    return 0;
}