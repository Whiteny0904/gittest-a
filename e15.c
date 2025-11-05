#include <stdio.h>

int main65() {
    int day = 10, n = 1;
    for (int i = day; i > 1; i--) {
        n = (n + 1) * 2;
    }
    printf("小明妈妈总共买了 %d 块巧克力\n", n);
    return 0;
}