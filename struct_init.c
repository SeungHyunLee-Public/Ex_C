#include <stdio.h>

struct Person
{
	char name[20];
	int age;
	char address[100];
};

int		main(void)
{
	struct Person p1 = { .name = "이승현", .age = 23, .address = "구리시 인창동" };

	printf("이름 : %s\n", p1.name);
	printf("나이 : %d\n", p1.age);
	printf("주소 : %s\n", p1.address);

	struct Person p2 = {"이승현", 23, "구리시 인창동"};

     printf("이름 : %s\n", p2.name);
     printf("나이 : %d\n", p2.age);
     printf("주소 : %s\n", p2.address);

	return (0);
}
