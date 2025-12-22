#include<iostream>
using namespace std;
union one4all{
    int int_val;
    long long_val;
    double double_val;
};
int main(){
    one4all u1;
    u1.int_val = 42;
    u1.long_val = 10000000000;
    u1.double_val = 3.14159;
    cout << "int_val: " << u1.int_val << endl;       // 未定义行为
    cout << "long_val: " << u1.long_val << endl;     // 未定义行为
    cout << "double_val: " << u1.double_val << endl; // 正确输出
    return 0;
}