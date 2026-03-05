#include <iostream>
#include <string>
using namespace std;

// 步骤1：前向声明Document（因为DocPrinter要用到它的引用）
class Document;

// 步骤2：定义DocPrinter类
class DocPrinter
{
public:
    // 成员函数声明：仅这个函数能访问Document的私有content
    void printContent(const Document &doc) const;

    // 普通成员函数：无法访问Document的私有content
    void printTitle(const Document &doc) const;
};

// 步骤3：定义被访问的类Document
class Document
{
private:
    string content; // 私有成员：文档内容（外部无法直接访问）
public:
    Document(string c) : content(c) {}

    // 🔥 核心声明：仅将DocPrinter的printContent()声明为友元
    // 注意：printContent是const成员函数，这里必须加const匹配签名
    friend void DocPrinter::printContent(const Document &doc) const;
};

// 步骤4：实现DocPrinter的成员函数（必须在Document定义之后）
void DocPrinter::printContent(const Document &doc) const
{
    // ✅ 合法：printContent是Document的友元成员函数，直接访问私有content
    cout << "文档内容：" << doc.content << endl;
}

int main()
{
    Document myDoc("这是一份机密文档的内容");
    DocPrinter printer;

    // 友元成员函数可以访问Document的私有成员
    printer.printContent(myDoc); // 输出：文档内容：这是一份机密文档的内容

    // 普通成员函数仍无法访问（封装性保留）
    // printer.printTitle(myDoc); // 编译错误

    return 0;
}