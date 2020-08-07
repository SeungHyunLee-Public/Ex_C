#include <stdio.h>

struct PacketHeader
{
	char flags;
	int seq;
};

int		main(void)
{
	struct PacketHeader header;

	printf("%ld\n", sizeof(header.flags));  //%d 는 int형이지만 sizeof는 unsigned long을 반환하기에 ld로 바꾸거나 (int)를 붙인다.
	printf("%d\n", (int)sizeof(header.seq));
	printf("%d\n", (int)sizeof(header));
	printf("%d\n", (int)sizeof(struct PacketHeader));

	return (0);
}
