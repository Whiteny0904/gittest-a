#include<stdio.h>
int main4()
{
	int k = 0, n, j = 0, num[16] = { 0 };
	printf("输入要转化的十进制数\n");
	scanf_s("%d", &n);
	printf("%d转化为二进制数：\n", n);
	do
	{
		num[k] = n % 2;
		n = n / 2;
		k++;

	} while (n != 0);
	for (k = 15; k >= 0; k--)
		printf("%d", num[k]);
	return 0;
}