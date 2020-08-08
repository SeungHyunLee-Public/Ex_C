// In order to make the members of the structure 0, each member is accessed and 0 is stored.
// You can use the memset function if you want to set the values of a structure variable or memory at once without setting values for each member or using curly braces.

#include <stdio.h>
#include <string.h>		// header file with memset function.

struct Point2D
{
	int x;
	int y;
};

int		main(void)
{
	struct Point2D p1;	// set p1 as the structure size 1.

	memset(&p1, 0, sizeof(struct Point2D));

	printf("%d %d\n", p1.x, p1.y);	// 0 0 : because set it to 0 using memset.

	return (0);
}
