#include <iostream>
#include <fstream>
#include <cstdlib> // 包含 exit()
using namespace std;

// 函数原型：os 参数可以是 cout（输出到控制台）也可以是 ofstream 对象（输出到文件）
// 展示了如何使用 ostream & 参数来统一处理不同的输出流
void file_it(ostream &os, double fo, const double fe[], int n);
const int LIMIT = 5;

int main()
{
    ofstream fout;
    const char *fn = "ep-data.txt"; // 文件名
    fout.open(fn);                  // 打开文件

    // 检查文件是否成功打开
    if (!fout.is_open())
    {
        cout << "Can't open " << fn << ". Bye.\n";
        exit(EXIT_FAILURE);
    }

    double objective;
    // 获取用户输入的望远镜物镜焦距
    cout << "Enter the focal length of your "
            "telescope objective in mm: ";
    cin >> objective;

    double eps[LIMIT];
    // 获取用户输入的目镜焦距
    cout << "Enter the focal lengths, in mm, of " << LIMIT << " eyepieces:\n";
    for (int i = 0; i < LIMIT; i++)
    {
        cout << "Eyepiece #" << i + 1 << ": ";
        cin >> eps[i];
    }

    // 调用 file_it 函数，将结果输出到文件对象 fout
    file_it(fout, objective, eps, LIMIT);
    // 再次调用 file_it 函数，将结果输出到控制台 cout
    file_it(cout, objective, eps, LIMIT);

    cout << "Done\n";
    return 0;
}

// 统一处理输出的函数
void file_it(ostream &os, double fo, const double fe[], int n)
{
    // 保存初始的格式化状态
    ios_base::fmtflags initial;
    initial = os.setf(ios_base::fixed);

    os.precision(0); // 设置精度为 0
    os << "Focal length of objective: " << fo << " mm\n";

    os.setf(ios::showpoint); // 显示小数点
    os.precision(1);         // 设置精度为 1

    // 打印表头
    os.width(12);
    os << "f.l. eyepiece";
    os.width(15);
    os << "magnification" << endl;

    // 遍历每一个目镜数据，计算并输出放大倍数
    for (int i = 0; i < n; i++)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        // 计算放大倍数：物镜焦距 / 目镜焦距，加 0.5 进行四舍五入
        os << int(fo / fe[i] + 0.5) << endl;
    }

    os.setf(initial); // 恢复初始的格式化状态
}