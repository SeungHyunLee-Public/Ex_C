#include <stdio.h>

union Data					// define union
{
	char c1;
	short num1;
	int num2;
};

	int		main(void)
{
	union Data d1;			// declar struct variable

	d1.num2 = 0x12345678;	// in little endian, 78 56 34 12

	printf("0x%x\n", d1.num2);	// print 4byte data
    printf("0x%x\n", d1.num1);	// print 2byte data
    printf("0x%x\n", d1.c1);	// print 1byte data
    printf("%d\n", (int)sizeof(d1)); // The total size of the union is the size of the largest data type

	return (0);
}
