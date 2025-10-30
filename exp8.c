#include<stdio.h>
int main38()
{
	char ch;
	scanf_s("%c",&ch);
	if (ch >= 'A' && ch <= 'Z')ch = ch + 32;
	else if (ch >= 'a' && ch <= 'z')ch = ch - 32;
	printf("%c\n", ch);
	return 0;
}