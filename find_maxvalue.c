#include <stdio.h>
#include <limits.h>

int		main(void)
{
	int a[10] = {6, 5, 3, 7, 9, 8, 1, 2, 4, 0};
	int i;
	int maxValue = INT_MIN;
	for (i = 0; i < 10; i++)
		if (maxValue < a[i]) maxValue= a[i];
	printf("%d\n", maxValue);
}
