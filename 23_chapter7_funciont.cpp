#include <iostream>
int main()
{

    int arr[4] = {1, 2, 3, 5};
    int *p = arr;
    sizeof arr;
    sizeof p;
    std::cout << "sizeof arr: " << sizeof arr << std::endl;
    std::cout << "sizeof p: " << sizeof p << std::endl; // 由操作系统决定，

        return 0;
}