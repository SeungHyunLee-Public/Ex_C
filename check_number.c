#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int user;
	int com;
	int count = 1;

	while(1)
	{
		printf("1부터 100중 랜덤생성된 숫자를 맞춰보세요.\n");
		printf("사용자가 입력한 숫자보다 크면 up, 작으면 down, 같을경우 ok 가 출력됩니다.\n");
		com = (rand() % 101) + 1;

		while (1)
		{
			scanf("%d", &user);
			if (user == 'e')
				break;
			if (user > 100 || user < 0)
			{
				printf("error : 프로그램을 종료합니다.\n");
				break;
			}
			else if (user == com)
			{
				printf("ok\n");
				printf(" %d 만큼의 시도만에 맞추었습니다 !\n", count);
				break;
			}
			else if (user < com)
				printf("up\n");
			else if (user > com)
				printf("down\n");
			count++;
		}
		if ( user > 100 || user < 0 )
			break;
	}
}
