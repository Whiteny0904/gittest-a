#include <stdio.h>
int main14()
{
	//char a; int b;
	//printf("请输入一个字符：");
	//scanf_s("%c", &a);
	//b = (int)a;
	//printf("\n\n%c的ASC2码为%d\n", a, b);

	int a;
	scanf_s("%d", &a);
	printf("/n%d(10),%o(8),%x(16)/n", a, a, a);
	return 0;
		
}