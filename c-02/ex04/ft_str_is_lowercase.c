int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_str_is_lowercase("lowercase")); // 1
	printf("%i\n", ft_str_is_lowercase("notLOweRCAsE")); // 0
}
*/