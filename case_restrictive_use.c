#include <stdio.h>

int		main(void)
{
	int num1;

	scanf("%d", &num1);

	switch (num1)
	{
	case 1:
	case 2:
		printf("1 또는 2입니다.\n");
		break;
	case 3:
	case 4:
		printf("3 또는 4입니다.\n");
		break;
	default:
		printf("default\n");
	}

/*	if (num == 1 || num1 == 2)
		printf("1 또는 2입니다.\n");
	else if (num1 == 3 || num1 == 4)
		printf("3 또는 4입니다.\n");
	else
		printf("default\n");	*/
	return (0);
}
