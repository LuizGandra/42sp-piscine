int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str > '~')
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_str_is_printable("printable")); // 1
	printf("%i\n", ft_str_is_printable("not\nprintable")); // 0
}
*/