#include <iostream>
#include <limits>
using namespace std;
// 数据类型
 int main()
 {
     cout << "type: \t\t" << "************size**************"<< endl;
     cout << "bool: \t\t" << sizeof(bool);
     cout << "\t最大值" << (numeric_limits<bool>::max)() << endl;
     cout << "char: \t\t" << "所占字节数：" << sizeof(char);
     cout << "\t最大值" << (numeric_limits<char>::max)();
     cout << "\t\t最小值" << (numeric_limits<char>::min)() << endl;
     cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
     cout << "\t最大值" << (numeric_limits<wchar_t>::max)();
     cout << "\t\t最小值" << (numeric_limits<wchar_t>::min)() << endl;
     cout << "short: \t\t" << "所占字节数：" << sizeof(short);
     cout << "\t最大值" << (numeric_limits<short>::max)();
     cout << "\t\t最小值" << (numeric_limits<short>::min)() << endl;
     return 0;
 }