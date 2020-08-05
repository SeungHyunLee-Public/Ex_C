#include <stdio.h>
#include <string.h>

int		main(void)
{
	char a[20] = "My Name";
	char b[20] = "Lee Seunghyun";
	strcpy(a, b);
	printf("복사된 문자열 : %s\n", a);
	return (0);
}
