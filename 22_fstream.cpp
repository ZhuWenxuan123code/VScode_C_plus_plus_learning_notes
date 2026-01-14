#include <iostream>
#include <fstream>
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
    return 0;
}