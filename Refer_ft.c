#include <stdio.h>

// 참조에 의한 전달방식으로, 변수의 주소를 전달하기에 값을 그대로 가져올 수 있다.
void	add(int *a)
{
	*a = *a + 10;
}

int		main(void)
{
	int a = 7;
	add(&a);
	printf("%d\n", a);
	return (0);
}
