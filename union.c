#include <stdio.h>
#include <string.h>		// ft_strcpy

union Box				// define union
{
	short candy;		// 2byte
	float snack;		// 4bite
	char doll[8];		// 8byte
};

int		main(void)
{
	union Box b1;		// declare union variable

	printf("%d\n", (int)sizeof(b1));	// the total size of the union is the size of the largest data type

	strcpy(b1.doll, "bear");

	printf("%d\n", b1.candy);
	printf("%f\n", b1.snack);
	printf("%s\n", b1.doll);

	return (0);
}
