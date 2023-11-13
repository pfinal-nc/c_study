//
// 常量是固定值, 在程序执行期间不会改变, 这些固定的值,有叫做字面量
// 常量可以是任何的基本数据类型,可氛围整形数字,浮点数字,字符, 字符串和布尔值
// 常量就像是常规的变量, 只不过常量的值在定义后不能进行修改

// 整数常量
// 212      合法的
// 215u     合法的
// 0xFeel   合法的
// 85 十进制
// 0213 八进制
// 30 整数
// 30u 无符号整数
// 30l  长整数
// 30ul 无符号长整数

// 浮点常量
// 浮点常量由整数部分, 小数点, 小数部分和指数部分组成, 可以使用小数形式或者指数形式来表示浮点常量
// 当使用小数形式表示时, 必须包含小数点, 指数, 或同时包含两者, 当使用指数形式表示时, 必须包含整数部分,小数部分,或同时包含两者.带符号的指数是用e 或 E引入的

// 定义常量
// define 预处理器
// #define identifier value
#include <iostream>
using namespace std;
//#define LENGTH 10
//#define WIDTH 5
//#define NEWLINE "\n"

int main() {
//
    const int LENGTH = 10;
    const int WIDTH = 5;
    const char NEWLINE = '\n';
    int area;

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    return 0;
}

// const 关键字