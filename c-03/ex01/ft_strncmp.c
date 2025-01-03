int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (!n)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < (n - 1))
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_strncmp("lowerstr", "lowerstring", 12)); // -105
	printf("%i\n", ft_strncmp("lowerstr", "lowerstring", 5)); // 0
	printf("%i\n", ft_strncmp("equalstr", "equalstr", 9)); // 0
	printf("%i\n", ft_strncmp("greaterstring", "greaterstr", 7)); // 0
	printf("%i\n", ft_strncmp("greaterstring", "greaterstr", 14)); // 105
}
*/
