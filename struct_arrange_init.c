#include <stdio.h>

struct Point2D
{
	int x;
	int y;
};

int		main(void)
{
	// Initialize while declaring an array of structures
	struct Point2D p1[3] = { { .x=10, .y = 20}, { .x = 30, .y = 40 }, { .x = 50, .y = 60} };

	printf("%d %d\n", p1[0].x, p1[0].y);
    printf("%d %d\n", p1[1].x, p1[1].y);
    printf("%d %d\n", p1[2].x, p1[2].y);

	struct Point2D p2[3] = { { 10, 20 }, { 30, 40 }, { 50, 60 } };

	printf("%d %d\n", p2[0].x, p2[0].y);
    printf("%d %d\n", p2[0].x, p2[0].y); 
    printf("%d %d\n", p2[0].x, p2[0].y);

// struct Point2D p[3] = { 0, };

	return (0);
}
