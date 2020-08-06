#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int *a = malloc(sizeof(int));
	printf("%d\n", (int)a);
	a = malloc(sizeof(int));
	printf("%d\n", (int)a);
	return (0);
}
