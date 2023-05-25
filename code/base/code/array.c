#include <stdio.h>

int main()
{
    // 遍历数组
    int ages[4] = {19, 22, 33, 13};
    for (int i = 0; i < 4; i++) {
        printf("ages[%d] = %d\n", i, ages[i]);
    }

    char info[4] = {'a','b','c'};
    for (int i = 0; i < 4; i++) {
        printf("ages[%d] = %c\n", i, info[i]);
    }
}