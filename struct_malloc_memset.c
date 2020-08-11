#include <stdio.h>
#include <stdlib.h>		// malloc, free
#include <string.h>		// memset

struct Point2D
{
	int x;
	int y;
};

int		main(void)
{
	struct Point2D *p1 = malloc(sizeof(struct Point2D));	//Allocate size as much as structure size
	memset(p1, 1, sizeof(struct Point2D)); // p1에 0이라는 값을 point2D의 크기만큼(???) 지정.
	printf("%d %d\n", p1->x, p1->y);

	free(p1);

	return (0);
}
