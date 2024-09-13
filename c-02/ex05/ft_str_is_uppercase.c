int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_str_is_uppercase("UPPERCASE")); // 1
	printf("%i\n", ft_str_is_uppercase("NoTUPpERcaSe")); // 0
}
*/