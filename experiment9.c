#include<stdio.h>
#define PI 3.1415926
int main()
{
	int r = 5;
	double c, area;
	c = 2 * r * r;
	area = PI * r * r;
	printf("圆的周长为：%f\n", c);
	printf("圆的面积为：%f\n", area);
	return 0;
}