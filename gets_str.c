#include <stdio.h>

int		main(void)
{
	char a[100];
//	scanf("%s", a); scanf는 공백을 읽을 수 없어 문자열에 부적합.
	gets(a);
	printf("%s\n", a);
	return (0);
}
