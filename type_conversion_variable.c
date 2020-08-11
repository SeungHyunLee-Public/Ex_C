#include <stdio.h>

int		main(void)
{
	int num1 = 32;
	int num2 = 7;
	float num3 = 40.1235;

	num1 = num3;
	printf("%d\n", num1);

	num3 = num1 / num2;
	printf("%f\n", num3);

	num3 = (float)num1 / num2;
	printf("%f\n", num3);

	return (0);
}
