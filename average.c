#include <stdio.h>

double		average(double a, double b)
{
    return (a + b) / 2;
}

int		main(void)
{
    double x, y, z;

    printf("숫자 세 개를 입력해주세요: ");
    scanf("%lf%lf%lf", &x, &y, &z);
    printf("%g와 %g의 평균: %g\n", x, y, average(x, y));
    printf("%g와 %g의 평균: %g\n", y, z, average(y, z));
    printf("%g와 %g의 평균: %g\n", z, x, average(z, x));

    return (0);
}
