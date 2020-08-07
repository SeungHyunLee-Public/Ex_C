#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

int		main(void)
{
	struct Person p1;

	strcpy(p1.name, "이승현");
	p1.age = 30;
	strcpy(p1.address, "구리시 인창동");

	printf("이름 : %s\n", p1.name);
	printf("나이 : %d\n", p1.age);
	printf("주소 : %s\n", p1.address);

	return (0);
}
