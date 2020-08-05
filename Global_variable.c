#include <stdio.h>

int a = 5; // main위에 선언했으므로 다른함수에서 바로 사용가능.

void	changeValue()
{
	a = 10;
}

int		main(void)
{
	printf("%d\n", a);
	changeValue();
	printf("%d\n", a);
	return (0);
}
