#include<stdio.h>
int main61()
{
	int k = 100;
	while (k >= 0)
	{
		printf("%d", k);
		k--;
		if (k % 10 == 0)
			printf("\n");
	}
	return 0;
}