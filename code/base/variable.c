#include <stdio.h>

// c 中每一个变量都有特定的类型, 类型决定了变量存储的大小和布局,该范围内的值都可以存储在内存中.
// 变量类型有:
// char, short, int, long, float, double, char*, short*, int*, long*, float*, double*, void*, void*

int x;
int y;

int addtwonum()
{
    // 函数内声明变量x
    extern int x;
    extern int y;
    // 给外部的变了赋值
    x = 1;
    y = 2;
    return x + y;
}

int main()
{
    int result;

    result = addtwonum();
    
    printf("result 为:%d", result);
    
    return 0;
}