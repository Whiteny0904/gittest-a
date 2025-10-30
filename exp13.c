#include <stdio.h>
int main43()
{
    int x, y;
    scanf_s("%d", &x);
    if (x == 0) y = 0;
    else if (x > 0) y = x + 3;
    else y = x - 3;
    printf("y=%d\n", y);
    return 0;
}