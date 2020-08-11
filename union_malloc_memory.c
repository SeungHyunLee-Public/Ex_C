#include <stdio.h>
#include <stdlib.h>		// malloc, free
#include <string.h>		// ft_strcpy

union Box
{
	short candy;
	float snack;
	char doll[8];
};

int		main(void)
{
	union Box *b1 = malloc(sizeof(union Box));

	printf("%d\n", (int)sizeof(union Box));	// 8

	strcpy(b1->doll, "bear");

	printf("%d\n", b1->candy);
	printf("%f\n", b1->snack);
	printf("%s\n", b1->doll);

	free(b1);

	return (0);
}
