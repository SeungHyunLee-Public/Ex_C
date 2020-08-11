#include <stdio.h>
#include <stdlib.h>

typedef enum _Location
{
	CITY,
	SCHOOL,
	HOSPITAL,
}LOCATION;

int		main(void)
{
	LOCATION Location;

	while (1)
	{
		printf("1. 도시 \t 2. 학교 \t 3. 병원\n");
		printf("이동할 곳을 입력해주세요 : " ); scanf("%d", (int *)&Location);
		printf("\n");

		switch (Location -1)
		{
		case CITY:
			printf("도시로 이동했습니다.\n");
			break;
		case SCHOOL:
			printf("학교로 이동했습니다.\n");
			break;
		case HOSPITAL:
			printf("병원으로 이동했습니다.\n");
			break;
		default:
			printf("그곳은 이동할 수 없습니다.\n");
			break;
		}
	}
	return (0);
}
