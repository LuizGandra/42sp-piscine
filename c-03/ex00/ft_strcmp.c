int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_strcmp("lowerstr", "lowerstring")); // -105
	printf("%i\n", ft_strcmp("equalstr", "equalstr")); // 0
	printf("%i\n", ft_strcmp("greaterstring", "greaterstr")); // 105
}
*/