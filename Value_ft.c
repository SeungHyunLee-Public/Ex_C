#include <stdio.h>

// 값에 의한 전달방식으로 지역변수라고 우선 이해함.
void	add(int a, int b)
{
	a = a + b;
//	printf("%d\n", a); (add에 prinft를 하면 초기화되기전 변경된 a값을 출력하므로 17이 출력된다.
}

int		main(void)
{
	int a = 7;
	add(a, 10);
//	printf("%d\n", a);  (main에 pinrtf를 하면 add함수에서 변경된 a가 넘어올때 다시 초기화 되므로 7이 출력된다.
	return (0);
}
