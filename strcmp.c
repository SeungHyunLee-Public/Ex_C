#include <stdio.h>
#include <string.h>

int		main(void)
{
	char a[20] = "Seunghyun Lee";
	char b[20] = "Qeunghyun Lee";
	//strcmp 결과에서 맥은 ascii코드 차이값만큼, 윈도우는 1, -1 로 출력된다.
	printf("두 배열의 사전순 비교 : %d\n", strcmp(a, b));
	return (0);
}
