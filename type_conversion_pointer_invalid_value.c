#include <stdio.h>
#include <stdlib.h>		// malloc, free

int		main(void)
{
	short *numPtr1 = malloc(sizeof(short));		// 2byte
	int *numPtr2;
	short *numPtr4 = malloc(sizeof(short));
	int *numPtr3;

	*numPtr1 = 0x1234;
	numPtr2 = (int *)numPtr1;	// *short to *int
	printf("0x%x\n", *numPtr2);

	*numPtr4 = 0x2345;
	numPtr3 = (int *)numPtr4;
	printf("0x%x\n", *numPtr3);

	free(numPtr1);
	return (0);
}
