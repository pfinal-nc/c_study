#include "stdio.h"
// 递归
int F(int a) { // 求阶乘
    if(a==1) return 1;
    else return a*F(a-1); // 如果不是1的话  就返回 a*a-1的阶乘
}

int main() {
    int b = F(5);
    printf("%d\n",b);
    return 0;
}