#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int user;
	int com;

	while (1)
	{
		printf("주사위 2개를 굴려 나온 숫자가 홀인지 짝인지 맞춰보세요.\n");
		printf(" 1 은 홀,  2 는 짝 입니다.\n");
		printf(" 프로그램을 종료하려면 숫자 9 를 입력하세요.\n");
		scanf ("%d", &user);
		com = (rand() % 11) + 2;
		if (user == 9)
			break;
		if (user == 1 && ((com % 2) == 1))
			printf("            컴퓨터가 생성한 숫자 : %d 맞췄습니다 !\n\n ", com);
		if (user == 2 && ((com % 2) == 0))
			printf("            컴퓨터가 생성한 숫자 : %d 맞췄습니다 !\n\n ", com);
		if (user == 1 && ((com % 2) == 0))
			printf("            컴퓨터가 생성한 숫자 : %d 틀렸습니다ㅜㅜ\n\n", com);
        if (user == 2 && ((com % 2) == 1))
			printf("            컴퓨터가 생성한 숫자 : %d 틀렸습니다ㅜㅜ\n\n", com);
		if (user != 1 && user != 2)
		{
			printf("            error : 1 또는 2 를 입력하지 않았습니다.\n");
			printf("                    프로그램을 종료합니다.\n");
			break;
		}
	}
}
