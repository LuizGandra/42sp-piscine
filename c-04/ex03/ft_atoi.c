int	ft_atoi(char *str)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += *str - '0';
		str++;
	}
	return (n * sign);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_atoi(" 	  ---+--+1234ab567	 ")); // -1234
	printf("%i\n", ft_atoi(" -+++-+529x x x ")); // 529
}
*/