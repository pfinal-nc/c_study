#include "stdio.h"
#include "stdlib.h"
#include <sys/queue.h>

// 定义数据域
struct data {
    int id;
    char name[24];
};

// 定义链域
struct list_entry {
    struct data d;
    LIST_ENTRY(list_entry) entries;
};

//定义头节点
LIST_HEAD(mylist, list_entry) list_head = LIST_HEAD_INITIALIZER(list_entry);

int main() {
    // 初始化
    LIST_INIT(&list_head);
    //判断"
    printf("%s\n", LIST_EMPTY(&list_head) ? "True" : "False"); //True

    //头部插入

    return 0;
}