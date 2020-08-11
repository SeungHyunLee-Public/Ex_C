#include <string.h>
#include <stdio.h>

union Box
{
	short candy;
	float snack;
	char doll[8];
};

int		main(void)
{
	union Box b1;
	union Box *ptr;

	ptr = &b1;

	strcpy(ptr->doll, "bear");

	printf("%d\n", ptr->candy);
	printf("%f\n", ptr->snack);
	printf("%s\n", ptr->doll);

	return (0);
}
