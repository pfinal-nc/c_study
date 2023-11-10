//
// Created by pfinal on 2023/11/10.
// 变量类型  bool, char, int, float, double, void, wchar_t
// 整数类型 1.int 用于表示整数,通常占用4个字节 2.short 用于表示短整数,通常占用2个字节 3.long 用于表示长整数,通常占用4个字节 4.long long 用于表示长长整数,通常占用8个字节

#include<iostream>
#include<ctime>
#include<iomanip>
#include<unistd.h>

using namespace std;

class Clock {
public:
    Clock() {
        time_t t = time(nullptr);
        struct tm ti = *localtime(&t);

        hour = ti.tm_hour;
        min = ti.tm_min;
        sec = ti.tm_sec;
    }

    void run() {
        while (true) {
            show(); // 完成显示
            tick(); // 完成数据更新
        }
    }

private:
    void show() const {
        system("clear");
        cout << setw(2) << setfill('0') << hour << ":";
        cout << setw(2) << setfill('0') << min << ":";
        cout << setw(2) << setfill('0') << sec;
        cout << endl;
    }

    void tick() {
        sleep(1);
        if (++sec == 60) {
            sec = 0;
            min++;
            if (++min == 60) {
                min = 0;
                hour++;
                if (++hour == 24) {
                    hour = 0;
                }
            }
        }
    }

    int hour;
    int min;
    int sec;
};

int main() {
    Clock c;
    c.run();
    system("pause");
    return 0;
}