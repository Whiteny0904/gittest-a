#include<stdio.h>
#define PI 3.14
int main4()
{
	float r, area;
	printf("\n Enter r value:");
	scanf_s("%f", &r);
	area = PI * r * r;
	printf("\n area=%f\n", area );
	return 0;
}