#include<stdio.h>
#include<stdlib.h>

int		 main()
{
 int user;
 int com;

 while(1)
{
  printf ("해당숫자를 입력하세요. (1: 가위, 2:바위, 3:보) : ");
  scanf ("%d", &user);
  com = rand() % 3+1;
  if (user == 9) break;
  if (user==1 && com==1) 
	printf("사용자 : %s, 컴퓨터 : %s\n비겼습니다.\n","가위","가위");
  if (user==2 && com==2)
	printf("사용자 : %s, 컴퓨터 : %s\n비겼습니다.\n","바위","바위");
  if (user==3 && com==3)
	printf("사용자 : %s, 컴퓨터 : %s\n비겼습니다.\n","보","보");  
  if (user==1 && com==3)
	printf("사용자 : %s, 컴퓨터 : %s\n이겼습니다.\n","가위","보");
  if (user==2 && com==1)
	printf("사용자 : %s, 컴퓨터 : %s\n이겼습니다.\n","바위","가위");
  if (user==3 && com==2)
	printf("사용자 : %s, 컴퓨터 : %s\n이겼습니다.\n","보","바위");
  if (user==1 && com==2)
	printf("사용자 : %s, 컴퓨터 : %s\n졌습니다.\n","가위","바위");
  if (user==2 && com==3)
	printf("사용자 : %s, 컴퓨터 : %s\n졌습니다.\n","바위","보");
  if (user==3 && com==1)
	printf("사용자 : %s, 컴퓨터 : %s\n졌습니다.\n","보","가위");
  if (user!=1 && user!=2 && user!=3)
	printf("error : 올바르지 않은 입력입니다. 게임을 종료하시려면 9 를 입력하세요.\n");
 }
}
