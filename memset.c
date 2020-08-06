#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		main(void)
{
	int i;

	for (i = 0; i < sizeof(int) * 25; i++)
		printf("%d", 1);
	printf("\n");
	char *a = malloc(sizeof(int) * 25);
	memset(a, '2', sizeof(int) * 25);
	for (i = 0; i < sizeof(int) * 25; i++)
		printf("%c", a[i]);
	printf("\n");
	for (i = 0; i < sizeof(int) * 25; i++)
		printf("%d", 3);
	return (0);
}
