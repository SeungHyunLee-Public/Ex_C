#include <stdio.h>

#pragma pack(push, 4) // n바이트 크기로 정렬
struct PacketHeader
{
	char flags; // 1bite;
	int seq;	// 4bite;
};
#pragma pack(pop)

int		main(void)
{
	struct PacketHeader header;

	printf("%d\n", (int)sizeof(header.flags));
	printf("%d\n", (int)sizeof(header.seq));
	printf("%d\n", (int)sizeof(header));

	return (0);
}
