#include<iostream>
#include<string>
using namespace std;

// 1. 结构体声明
struct Student {
    string name;
    int age;
    double score;
};

// 带有构造函数的结构体
struct Teacher {
    string name;
    int id;

    // 构造函数
    Teacher(string n, int i) : name(n), id(i) {}
};

int main()
{
    // 2. 结构体初始化方式

    // 方式一：顺序初始化 (C风格/聚合初始化)
    // 必须按照成员定义的顺序赋值
    struct Student s1 = {"张三", 18, 90.5}; 
    cout << "方式一: " << s1.name << ", " << s1.age << endl;

    // 方式二：省略 struct 关键字 (C++ 特性)
    Student s2 = {"李四", 19, 88.0};
    cout << "方式二: " << s2.name << ", " << s2.age << endl;

    // 方式三：C++11 列表初始化 (Uniform Initialization)
    // 可以省略等号
    Student s3 {"王五", 20, 95.0};
    cout << "方式三: " << s3.name << ", " << s3.age << endl;

    // 方式四：C++20 指定初始化 (Designated Initializers)
    // 更加清晰，可以不按顺序(但在C++中通常建议按顺序，且必须匹配成员声明顺序)
    // 注意：编译时需要支持 C++20 标准 (g++ -std=c++20)
    Student s4 = {.name = "赵六", .age = 21, .score = 85.5}; 
    cout << "方式四: " << s4.name<<", " << s4.age << endl;

    // 方式五：使用构造函数初始化
    // 一旦定义了构造函数，就不能使用简单的聚合初始化了
    Teacher t1("老王", 1001);
    cout << "方式五: " << t1.name << ", " << t1.id << endl;

    // 方式六：指针初始化
    Student* s5 = new Student{"孙七", 22, 99.0};
    
    // 关于 -> 运算符的解释：
    // s5 是一个指针 (Student*)
    // s5->name 的意思是：先找到 s5 指向的对象，然后访问它的 name 属性
    // 它等价于 (*s5).name
    // 
    // 问：s5->name 是值还是指针？
    // 答：这取决于 name 成员本身的定义。
    //     在这里，name 定义为 string，所以 s5->name 就是一个 string 值。
    //     如果结构体里有一个成员是 int* ptr，那么 s5->ptr 就是一个指针。
    
    cout << "方式六: " << s5->name << ", " << s5->age << endl;
    delete s5; // 记得释放内存

    // 方式七：空列表初始化 (Value Initialization)
    // 问：Point p = {} 和 Point p{} 是不是成员变量都会被设置为0？
    // 答：是的。这两种方式都会进行“值初始化”。
    //     1. 对于基本数据类型 (int, double, bool 等)，会被初始化为 0。
    //     2. 对于类类型 (string, vector 等)，会调用默认构造函数。
    Student s7 = {}; // 或者是 Student s7{};        
    cout << "方式七: name='" << s7.name << "', age=" << s7.age << ", score=" << s7.score << endl;
    // 输出结果会是: name='', age=0, score=0

    // 方式八：默认初始化 (Default Initialization)
    // 问：Student s8; 这样初始化呢？会赋初值吗？
    // 答：不一定。
    //     1. string name (类类型)：会调用默认构造函数，初始化为空字符串 ""。
    //     2. int age, double score (内置类型)：
    //        - 如果 s8 是局部变量（在函数内），它们的值是**未定义**的（随机垃圾值）。
    //        - 如果 s8 是全局变量（在函数外），它们会被初始化为 0。
    Student s8; 
    cout << "方式八: name='" << s8.name << "', age=" << s8.age << " (可能是垃圾值)" << endl;

    cout << "\n" << endl;
    return 0;
}