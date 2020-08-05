#include <stdio.h>

void	process()
{
	// 5로 적재가 되고, 함수를 불러올때마다 static int는 무시하고 1씩 더해져서 나오게 된다.
	static int a = 5;
	a +=1;
	printf("%d\n", a);
}

int		main(void)
{
	process();
	process();
	process();
	process();
	return (0);
}
