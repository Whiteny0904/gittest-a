#include <stdio.h>

int main() {
    float p, salary = 500, commission = 0;

    printf("�����빤������p(Ԫ): ");
    scanf_s("%f", &p);

    if (p > 10000)
        commission = p * 0.25;
    else if (p > 5000)
        commission = p * 0.20;
    else if (p > 2000)
        commission = p * 0.15;
    else if (p > 1000)
        commission = p * 0.10;

    salary += commission;
    printf("���¹����ܶ�: %.2f Ԫ\n", salary);

    return 0;
}