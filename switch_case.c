#include <stdio.h>

int		main(void)
{
	int num1;

	scanf("%d", &num1);
// 조건식이 바뀌지 않고 값만 바뀔때는 switch, 조건식과 값이 모두 바뀔때는 else if 
	switch (num1)
	{
	case 1:
		printf("1입니다.\n");
		break;
	case 2:
		printf("2입니다.\n");
		break;
	default:
		printf("default\n");
		break;
	}

/*	if (num1 == 1)
		printf("1입니다.\n");
	else if (num1 == 2)
		printf("2입니다.\n");
	else
		printf("default.\n"); */

	return (0);
}
