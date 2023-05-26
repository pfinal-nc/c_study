#include <stdio.h>
#include <float.h>

int main()
{
    // 浮点数据类型
    printf("float 存储数量大小: %lu \n",sizeof(float));
    printf("float 最小值: %E \n", FLT_MIN);
    printf("float 最大值: %E \n", FLT_MAX);

    // void 类型函数返回为空
    // 类型转换
    int i=30;
    float f = 3.14;
    double d = i + f; // 隐式将 int 类型转换成 double 类型
    printf("d %f",d);

    float e = 3.14159;
    printf("e is %f",e);
    int g =  (int)d; // 显示将double 类型转换成int 类型

    // 定义常量
    const int LENGTH = 10;
    const char NAME[] = "pfinal";

    printf(" name is %s \n", NAME);

    return 0;
}