#include <cstring>
#include "stringbad.h"
using std::cout;
// 初始化静态的类成员
int StringBad::num_strings = 0;
// class method
StringBad::StringBad(const char *s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
    cout << num_strings << ":\"" << str << "\" object created\n";
}
StringBad::StringBad() // default constructor
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++"); // default string
    num_strings++;
    cout << num_strings << ": \"" << str
         << "\" default object created\n"; // FYI
}

StringBad::~StringBad() // necessary destructor
{
    cout << "\"" << str << "\" object deleted, "; // FYI
    --num_strings;                                // required
    cout << num_strings << " left\n";             // FYI
    delete[] str;                                 // required
}

std::ostream &operator<<(std::ostream &os, const StringBad &st)
{
    os << st.str;
    return os;
}