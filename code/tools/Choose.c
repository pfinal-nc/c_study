#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
    const char* os = "Windows";
#elif __linux__
    const char* os = "Linux";
#elif __APPLE__
    const char* os = "Mac";
#else
    const char* os = "Unknown";
#endif
int main(void)
{
    int code;
    char key;
    
    do
    {
        puts("----------------------------------------------");
        puts("-----------欢迎使用PF-Unix系统工具------------");
        puts("|     按 1 :查看当前系统信息                  |");
        puts("|     按 2 :查看当前系统信息                 |");
        puts("----------------------------------------------");
        printf("当前系统是: 【%s】系统\n",os);
        printf("请输入您的选项: ");
        scanf("%d", &code);
        
        switch (code)
        {
            case 1:
                puts("\n# 系统信息 #");
                system("uname -a");
                puts("\n# 存储空间 #");
                system("df -lh");
                puts("\n# 网络信息 #");
                system("ifconfig");
                break;
            case 2:
                puts("#---------------------------------------------#");
                puts("#---------------------------------------------#");
                break;
            default:
                printf("无效的选项\n");
                break;
        }
        
        printf("\n是否继续，继续请输入Y，退出请输入N: ");
        scanf(" %c", &key);
        
    } while (key == 'Y' || key == 'y');
    
    return 0;
}
