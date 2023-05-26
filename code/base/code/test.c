#include <stdio.h>
#include "custom_functions.h"

int main() {
    int a,b;
    printf("请输入a: ");
    scanf("%d", &a);
    int result = add(a, 3);
    printf("Result: %d\n", result);

    return 0;
}