#include <stdio.h>

int		main(void)
{
	int digits;
	int n;

	digits = 0;
	printf("음수가 아닌 정수를 입력하세요 :  ");
	scanf("%d", &n);

	if (!(0 <= n && n <= 2147483647))
	{
		return (1);
	}
	do
	{
		n /= 10;
		digits++;
	} while (n > 0);

	printf("자릿수는 %d입니다.\n", digits);

	return (0);
}
