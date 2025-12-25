#include <iostream>
using namespace std;
int main()
{
    int *p, *q; // 每个指针变量的声明都要加*

    int *fellow;  // 错误
    *fellow = 10; // 未初始化的指针变量fellow，指向未知地址，解引用会出错（可能指向程序代码地址）
    cout << "fellow = " << *fellow << endl;

    int value;         // 正确，因为地址已经确定，地址是系统分配的
    int *ptr = &value; // 指针变量ptr存储变量value的地址

    int *ptr1 = new int;       // 动态分配内存，ptr1指向这块内存
    delete ptr1;               // 释放ptr1指向的内存
    int *array1 = new int[10]; // 动态分配一个整型数组，array1指向数组的第一个元素
    delete[] array1;           // 先释放堆内存，防止内存泄漏
    int temp[] = {1, 2, 3};
    array1 = temp; // 数组名temp表示数组的首地址，array1指向数组的第一个元素
    cout << "array1[0] = " << *array1 << endl;
    // delete[] array1; // 此时array1指向栈内存temp，不能delete

    double *ptr2 = new double[3]; // 动态分配一个double类型变量，并初始化为3.14
    ptr2[0] = 3.14;
    ptr2[1] = 2.78;
    ptr2[2] = 1.62;
    cout << "ptr2[0] = " << ptr2[0] << endl;
    ptr2++; // 指针运算，指向下一个double类型变量
    cout << "ptr2[0] = " << *ptr2 << endl;
    return 0;
}