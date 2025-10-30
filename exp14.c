#include <stdio.h>

int main() {
    float p, salary = 500, commission = 0;

    printf("请输入工程利润p(元): ");
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
    printf("本月工资总额: %.2f 元\n", salary);

    return 0;
}