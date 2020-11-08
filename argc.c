#include <stdio.h>
#include <string.h>

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (strcmp(argv[i], "0") == 0)
			break;
		printf("%s\n", argv[i]);
		i++;
	}
}
