#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int i;
	int j;

	int **p = (int**)malloc(sizeof(int*) * 3);
	for (i = 0; i < 3; i++)
		p[i] = (int*)malloc(sizeof(int) * 3);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			p[i][j] = i * 3 + j;
			printf("%d ", p[i][j]);
		}	
		printf("\n");
	}
//	for (i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//			printf("%d ", p[i][j];
//		printf("\n");
//	}
	return (0);
}	
