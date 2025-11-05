#include <stdio.h>

int main66() {
    double millionaire = 0, stranger = 0.01;
    for (int i = 1; i <= 30; i++) {
        millionaire += 100000;
        stranger += stranger;
    }
    printf("陌生人给了百万富翁 %.2f 元\n", millionaire);
    printf("百万富翁给了陌生人 %.2f 元\n", stranger);
    return 0;
}