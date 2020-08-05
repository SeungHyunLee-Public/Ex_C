#include <stdio.h>
#include <string.h>

int		main(void)
{
	// strcat은 합쳐질 문자열의 크기를 넉넉하게 잡아야한다 sigill이 발생할 수 있기 때문.
	char a[40] = "My Name is ";
	char b[30] = "Seunghyun Lee";
	strcat(a, b);
	printf("합쳐진 결과 문자열 : %s\n", a);
	return (0);
}
