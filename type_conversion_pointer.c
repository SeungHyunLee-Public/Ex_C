#include <stdio.h>
#include <stdlib.h>		// malloc, free

int		main(void)
{
	int *numPtr = malloc(sizeof(int));	// 4byte
	char *cPtr;

	*numPtr = 0x12345678;

	cPtr = (char *)numPtr;		// *int to *char
	printf("0x%x\n", *cPtr);

	free(numPtr);
	return (0);
}
