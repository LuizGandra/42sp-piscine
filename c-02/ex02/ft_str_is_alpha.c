int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_str_is_alpha("strisalpha")); // 1
	printf("%i\n", ft_str_is_alpha("str 1snt 4lph4")); // 0
}
*/