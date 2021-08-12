#include <stdio.h>

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main() {
    int area;
    area = LENGTH * WIDTH;
    printf("value of area: %d", area);
    printf("%c", NEWLINE);

    const int LENGTHA = 10;
    
    area = LENGTHA * WIDTH;
    printf("value of area: %d", area);

    return 0;
}