#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Point2D
{
	int x;
	int y;
};

int		main(void)
{
	struct Point2D p1;
	struct Point2D *p2 = malloc(sizeof(struct Point2D));

	p2->x = 10;
	p2->y = 20;

	memcpy(&p1, p2, sizeof(struct Point2D));

	printf("%d %d\n", p1.x, p1.y);

	free(p2);

	return (0);
}
