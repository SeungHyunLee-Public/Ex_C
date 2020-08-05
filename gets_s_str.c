#include <stdio.h>
#include <string.h>

int		main(void)
{
	char a[100];
	gets_s(a, sizeof(a));
	printf("%s\n", a);
	return (0);
}
