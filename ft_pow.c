#include <stdio.h>
#include <math.h>


int		main(void)
{
	int a;
	int b;
	int result;
	int res;

	res = pow(3, 5);
	a = 3;
	b = 5;
	result = 1;
	while (b)
	{
		result = result * a;
		b--;
	}
	printf("ft_pow함수를 이용한 결과\n");
	printf("%d\n\n", result);
	printf("pow 함수를 이용한 결과\n");
	printf("%d\n", res);
}
