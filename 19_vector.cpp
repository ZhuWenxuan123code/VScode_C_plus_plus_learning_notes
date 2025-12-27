#include <iostream>
#include <vector>
#include <array>
using std::array;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    // test vector
    // vector<typeName> vt(n_elem); 此处n_elem可以是整性常量，也可以整型变量
    vector<int> vi;
    int n = 2;
    vector<double> vd(n);

    // test array
    // array <typeName, n_elem> arr; 此处n_elem不能是变量，但是在vector中却可以
    array<int, 5> ai;
    array<double, 10> ad = {1.0, 1, 1};
    cout << ad[0] << endl;
    // at()函数：通过下标访问元素，并进行边界检查，如果下标越界则抛出out_of_range异常
    cout << ad.at(0) << endl;
    return 0;
}