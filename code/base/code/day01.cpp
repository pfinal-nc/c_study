#include<iostream>

using namespace std;
// 全局变量声明
int g;

int main() {
//    int a1 = 10;
//    int b1 = 3;
//
//    cout << a1 + b1 << endl;
//    cout << a1 - b1 << endl;
//    cout << a1 * b1 << endl;
//    cout << a1 / b1 << endl;
//
//    system("pause");
//    return 0;
    // 局部变量
    int a, b;
    int c;

    // 实际初始化
    a = 10;
    b = 20;
    c = a + b;
    g = a + b;
    cout << c << endl;
    cout << g << endl;
    return 0;
}
// 初始化局部变量和全局变量  当局部变量被定义时，系统不会对其初始化,必须自动对其初始化,定义全局变量时,系统会自动初始化为下列值

