#include <stdio.h>

// 3차원 배열지만 화면은 2차원이므로 2차원이 2번 출력된다.
int		a[2][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}};

int		main(void)
{
	int i;
	int j;
	int k;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; k++)
				printf("%d ", a[i][j][k]);
		printf("\n");
		}
	printf("\n");
	}
	return (0);
}
