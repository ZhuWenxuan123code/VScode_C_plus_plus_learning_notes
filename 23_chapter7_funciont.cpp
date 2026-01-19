#include <iostream>
#include <string>
#include <array>
using namespace std;
int main()
{

    int arr[4] = {1, 2, 3, 5};
    int *p = arr;
    sizeof arr;
    sizeof p;
    std::cout << "sizeof arr: " << sizeof arr << std::endl;
    std::cout << "sizeof p: " << sizeof p << std::endl; // 由操作系统决定，

    // 函数和二维数组
    int data[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    int sum(int (*arr)[4], int size); // 或者 int sum(int arr[][4], int size);

    // 函数和string对象
    string list[3];
    for (int i = 0; i < 3; ++i)
    {
        cout << "Enter string " << i + 1 << ": ";
        getline(cin, list[i]);
    }

    // 函数与array对象
    array<double, 4> expenses = {2500.0, 2300.0, 3400.0, 2800.0};
    void show(array<double, 4> arr);

    return 0;
}
int sum(int (*arr)[4], int size)
{
    int total = 0;
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            total += arr[i][j];
        }
    }
    return total;
}