//
// Created by pfinal on 2023/11/14.
//
#include<iostream>
#include <iomanip>
#include<ctime>

using namespace std;
using std::setw; // setw() 函数来格式化输出

// 要生成和返回随机数的函数
int *getRandom() {
    static int r[10];
    // 设置种子
    srand((unsigned) time(NULL));
    for (int i = 0; i < 10; ++i) {
        r[i] = rand();
        //cout << r[i] << endl;
    }
    return r;
}


int main() {
//    // 随机数
//    int i, j;
//    // 设置种子
//    // 在许多情况下，需要生成随机数。关于随机数生成器，有两个相关的函数。一个是 rand()，该函数只返回一个伪随机数。生成随机数之前必须先调用 srand() 函数。
//    srand((unsigned) time(NULL));
//
//    // 生成10个随机数
//    for (i = 0; i < 10; ++i) {
//        // 生成实际的随机数
//        j = rand();
//        cout << "随机数:" << j << endl;
//    }
//    // 初始化数组
//    double pfinal[5] = {1, 2, 3, 4, 5};
//    pfinal[4] = 10;
//    int pfinalclub[10]; //定义一个包含10个整数的数组
//    for (i = 0; i < 10; ++i) {
//        pfinalclub[i] = i + 100;
//    }
//    cout << "Element" << setw( 13 ) << "Value" << endl;
//
//    // 输出数组中每个元素的值
//    for ( int j = 0; j < 10; j++ ){
//        cout << setw( 7 )<< j << setw( 13 ) << pfinalclub[ j ] << endl;
//    }
//    return 0;
//    int *p;
//    p = getRandom();
//    cout << p[0] <<endl;
//    for (int i = 0; i < 10; ++i) {
//        cout << *(p + i) << endl;
//    }
}

