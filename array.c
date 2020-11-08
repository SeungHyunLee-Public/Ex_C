#include <stdio.h>

int main(void)
{
	int i = 0;
	char str[100];

	scanf("%s", str);
	for(i = 0; i < 10; i++)
	{
		if (str[i] == 0)
			break;
		printf("%c\n", str[i]);
	}
	main(); 
}
