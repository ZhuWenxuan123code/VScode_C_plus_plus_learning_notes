#include <iostream>
#include <string>
#include <array>
using namespace std;
inline double square(double x) { return x * x; }
int main()
{
    // 内联函数

    cout << "square(5.0): " << square(5.0) << endl;

    return 0;
}
