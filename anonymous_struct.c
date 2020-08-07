#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[20];
	int age;
	char address[100];
} Person;

int		main(void)
{
	Person p1;

	strcpy(p1.name, "이승현");
	p1.age = 23;
	strcpy(p1.address, "구리시 인창동");

	printf("이름 : %s\n", p1.name);
	printf("나이 : %d\n", p1.age);
	printf("주소 : %s\n", p1.address);

	Person p2;

	strcpy(p2.name, "간장");
	p2.age = 26;
	strcpy(p2.address, "제주도 어딘가");

	printf("이름 : %s\n", p2.name);
	printf("나이 : %d\n", p2.age);
	printf("주소 : %s\n", p2.address);

	return (0);
}
