#include <stdio.h>
#include <string.h>
#include <unistd.h>

int		ft_strcmp(const char *str1, const char *str2)
{
	int i = 0;

	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] > str2[i])
			return (1);
		else if (str1[i] < str2[i])
			return (-1);
		i++;
	}
	if (str1[i] == '\0' && str2[i] == '\0')
		return (0);
	else if (str1[i] == '\0')
		return (-1);
	else
		return (1);
}

int		main(void)
{
//	char a[6] = "cbcdef";
//	char b[6] = "abcdef";
//
//	printf("%c", ft_strcmp(*a, *b));
//	printf("\n");
//	printf("%c", strcmp(*a, *b));
	printf("system:\n");
	printf("%d ",strcmp("", "abc"));
	printf("%d ",strcmp("abc", ""));
	printf("%d ",strcmp("abc", "abc"));
	printf("%d ",strcmp("abd", "abe"));
	printf("%d ",strcmp("abc", "abcde"));
	printf("%d ",strcmp("abcde", "abc"));
	printf("\n----------------\nUser Created:\n");
	printf("%d ",ft_strcmp("", "abc"));
	printf("%d ",ft_strcmp("abc", ""));
	printf("%d ",ft_strcmp("abc", "abc"));
	printf("%d ",ft_strcmp("abd", "abe"));
	printf("%d ",ft_strcmp("abc", "abcde"));
	printf("%d ",ft_strcmp("abcde", "abc"));
}
