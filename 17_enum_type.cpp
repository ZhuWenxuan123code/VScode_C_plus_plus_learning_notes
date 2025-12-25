#include<iostream>
using namespace std;
// 枚举类型的声明 (跟const int有点像)
enum Color {
    RED,    // 默认值为0
    GREEN,  // 默认值为1            
    BLUE    // 默认值为2
};
int main() {

    // 枚举类型的变量声明和初始化
    Color c1 = RED;          // 方式一：直接使用枚举成员初始化
    Color c2 = Color::GREEN; // 方式二：使用作用域解析运算符初始化
    cout << "c1: " << c1 << endl; // 输出枚举成员的整数值
    cout << "c2: " << c2 << endl;
    Color c3 = static_cast<Color>(2); // 直接赋值为整数可以吗？
    cout << "c3: " << c3 << endl;
    cout<< GREEN << endl;
    return 0;
}