#include <stdio.h>

void	function()
{
	printf("abc");
}

int		main(void)
{
	printf("%d\n", (int)function);
	return (0);
}
