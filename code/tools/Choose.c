#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int code;
    double eng, cn;
    char key;
    do
    {
        /* code */
        puts("----------------------------------------------");
        puts("-----------欢迎使用PF-Unix系统工具------------");
        puts("|  按 1 :查看本系统存储空间               |");
        printf("your put is :");
        scanf("%d", &code);
        switch (code)
        {
            case 1:
                system("df -lh");
                /* code */
                break;
            
            default:
                break;
        }
        puts("是否继续,继续请Y, 退出请按N");
        printf("您的选择是Y/N: ");
        scanf("%c ",&key);
    } while ('Y'==key || 'y'==key);
    return 0;
}