#include<stdio.h>
int main62()
{
	int i, n, s = 1;
	printf("Please enter n£º");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
		s = s * i;
	printf("%d!=%d\n", n, s);
	return 0;

}