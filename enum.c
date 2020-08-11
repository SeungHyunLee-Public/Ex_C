#include <stdio.h>

enum Day0fWeek
{
	Sunday = 0,
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
};

int		main(void)
{
	enum Day0fWeek week;

	week = Tuesday;
	printf("%d\n", week);

	return (0);
}
