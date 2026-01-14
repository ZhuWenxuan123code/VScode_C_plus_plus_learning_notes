#include <iostream>
#include <fstream>
#include <cstdlib> // For exit()
using namespace std;
int main()
{
    // ofstream 的使用
    ofstream outFile; // 创建一个ofstream对象
    ofstream fout;
    outFile.open("./tmp/temp.txt"); // 将ofstream对象和一个文件关联在一起。。
    char filename[50];
    cin >> filename; // "./tmp/yes.txt"
    cin.get();
    fout.open(filename);

    // 使用对象  就像使用cout那样使用该ofstream对象。
    double wt = 12.9;
    outFile << wt;
    char line[20] = "this is my name";
    fout << line << endl;
    outFile.close(); // 关闭文件
    fout.close();

    // ifstream 的使用
    ifstream inFile; // 创建一个ifstream对象
    cout << "Please enter file name: ";
    char filein[50];
    cin.getline(filein, 50); // "./tmp/temp.txt"
    inFile.open(filein);     // 将ifstream对象和一个文件关联在一起。
    if (!inFile.is_open())
    {
        cout << "Error opening file!" << endl;
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;
    inFile >> value;      // 从文件中读取数据到value变量中
    while (inFile.good()) // 检查是否成功读取数据
    {
        ++count;
        sum += value;
        inFile >> value; // 继续读取下一个数据
    }
    if (inFile.eof())
        cout << "End of file reached." << endl;
    else if (inFile.fail())
        cout << "Input terminated by data mismatch." << endl;
    else
        cout << "Input terminated for unknown reason." << endl;

    if (count == 0)
        cout << "No data read from file." << endl;
    else
        cout << "Read " << count << " items, sum = " << sum << endl;
    inFile.close(); // 关闭文件

    return 0;
}