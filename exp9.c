#include<stdio.h>
#include<math.h>
int main39()
{
	float a, b, c;
	float s, area;
	scanf_s("%f,%f,%f", &a, &b, &c);
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		s = (a + b + c) / 2;
		area = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("�����ε����Ϊ��%f\n", area);
		if (a == b && b == c)
			printf("�ȱ�������\n");
		else if ((a == b) || (a == c) || (b == c))
			printf("����������\n");
		else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (c * c + b * b == a * a))
			printf("ֱ��������\n");
		else printf("һ��������\n");




	}
	else printf("�������������\n");
	return 0;
}