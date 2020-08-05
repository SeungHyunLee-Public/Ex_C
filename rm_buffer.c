#include <stdio.h>

int		main()
{
	int a;
	char c;
	int temp;
	
	scanf("%d", &a);
	printf("%d\n", a);
	while ((temp = getchar()) != EOF && temp != '\n') {}
	scanf("%c", &c);
	printf("%c\n", c);
	return (0);
}
