#include <stdio.h>
// 메인메모리대신 cpu의 헤지스터를 사용해서 조금더 빠른 처리를 기대 할 수 있다.
// 하지만 실제로 레지스터에서 처리하는지는 확실하지 않다.
int		main(void)
{
	register int a = 10;
	register int i;
	for (i = 0; i < a; i++)
		printf("%d ", i);
	return (0);
}
