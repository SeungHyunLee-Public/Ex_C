#include <stdio.h>
#include <string.h>

int		main(void)
{
	char a[20] = "Hello everyone !";
	char b[20] = "eve";
// 문자열을 찾은 주소값을 반환하므로, 찾은이후 문자열부터 '\0'까지 반환.
	printf("찾은 문자열 : %s\n", strstr(a, b));
	return (0);
}
