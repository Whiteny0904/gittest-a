#include<stdio.h>
int main15()
{
   int u = 89; int v = 89;
	printf("u=%d,v=%d\n", u, v);
	int x, y, a;
	scanf_s("%d,%d", &x, &y);
	a = (x + y) / 2;
	printf("The average is %d:\n", a);
    return 0;
}