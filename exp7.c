#include<stdio.h>
void main37()
{
	int sex, weight, cubage;
	printf("�������Ѫ�ߵ��Ա�����أ�");
	scanf_s("%d,&d", &sex, &weight);
	if (sex >= 0)
	{
		if (weight >= 120)
		{
			cubage = 200;
			printf("����Ӧ����Ѫ��%d����\n", cubage);

		}
		else {
			cubage = 180;
			printf("����Ӧ����Ѫ��%d����\n", cubage);
		}
	}
	else {
		if (weight >= 100)
		{
			cubage = 150;
			printf("����Ӧ����Ѫ��%d����\n", cubage);

		}
		else {
			cubage = 120;
			printf("����Ӧ����Ѫ��%d����\n", cubage);
		}
	}
	}
