int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_str_is_numeric("0123456789")); // 1
	printf("%i\n", ft_str_is_numeric("o123a 56789")); // 0
}
*/