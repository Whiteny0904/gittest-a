#include<stdio.h>
int main()
{
	int a, b,c, max;
	printf("��������������a,b,c:");
	scanf_s("%d %d %d", &a, &b, &c);
	max = a;
	if (b > max)max = b;
	if (c > max)max = c;
	printf("�������ǣ�%d\n", max);
	return 0;
}