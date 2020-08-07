#include <stdio.h>

//case 후 break가 없으면 밑의 모든 case가 전부 실행된다.

int		main(void)
{
	int num1;

	scanf("%d", &num1);

	switch (num1)
	{
	case 1:
		printf("1입니다.\n");
    case 2:
		printf("2입니다.\n");
    case 3:
		printf("default\n");
	}

	return (0);
}
