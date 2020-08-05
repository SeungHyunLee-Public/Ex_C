#include <stdio.h>

int		main(void)
{
	int a = 7;
	if (1)
	{
		int a = 5; // 지역변수이므로 그 블록에서만 사용가능 이후엔 원래대로 초기화.
		printf("%d", a);
	}
	printf("\n");
	printf("%d", a);
	printf("\n");
	return (0);
}
