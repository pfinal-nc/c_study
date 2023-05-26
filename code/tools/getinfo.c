#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>

int main(void)
{
    CURL *curl;
    CURLcode res;
    const char *to = "recipient@example.com";
    const char *from = "sender@example.com";
    const char *subject = "系统信息";
    const char *body = "这是系统信息的内容";
    
#ifdef _WIN32
    #define SYSTEM_COMMAND "systeminfo"
#elif defined(__unix__)
    #define SYSTEM_COMMAND "uname -a"
#else
    #error "Unsupported operating system"
#endif
    // 执行系统命令并获取输出结果
    FILE *fp = popen(SYSTEM_COMMAND, "r");
    if (fp == NULL) {
        printf("无法执行系统命令\n");
        return 1;
    }

    char command_output[256] = "";
    char line[256];
    while (fgets(line, sizeof(line), fp) != NULL) {
        strcat(command_output, line);
    }
    pclose(fp);    

    

}