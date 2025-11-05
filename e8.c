#include<stdio.h>
int main58()
{
	int n, sum = 0;
	n = 2345;
	do {
		sum = sum + (n % 10) * (n % 10);//计算当前数字的最后一位
		n = n/10;//去掉最后一位数字
	} while (n);
	printf("sum=%d\n", sum);
	return 0;
}