#include <stdio.h>
#include <limits.h>

int main()
{
    printf("int 存储大小: %lu \n", sizeof(int));
    printf("float 存储最大字节数: %lu \n", sizeof(float));
    printf("float 最大值: %E\n", __FLT_MAX__);
    printf("float 最小值: %E\n", __FLT_MIN__);
    return 0;
}