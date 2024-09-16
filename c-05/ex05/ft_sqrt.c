int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i <= nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_sqrt(0)); // 0
	printf("%i\n", ft_sqrt(-2)); // 0
	printf("%i\n", ft_sqrt(25)); // 5
	printf("%i\n", ft_sqrt(81)); // 9
	printf("%i\n", ft_sqrt(64)); // 8
	printf("%i\n", ft_sqrt(16)); // 4
}
*/