#include <stdio.h>
#include <stddef.h> // header file with offsetof macro

#pragma pack(push, 4)
struct PacketHeader
{
	char flags;
	int seq;
};

#pragma pack(pop)

int		main(void)
{
	printf("%d\n", (int)offsetof(struct PacketHeader, flags)); 
		// Relative path == 0;
	printf("%d\n", (int)offsetof(struct PacketHeader, seq));
		// Relative path == 1; , pragma pack(push, 2) = 2, 4 = 4, 16 = 16;
	return (0);
}
