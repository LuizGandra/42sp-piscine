int	ft_iterative_power(int nb, int power)
{
	int	base;

	base = nb;
	if (power < 0)
		return (0);
	if (!power)
		return (1);
	while (--power)
		nb *= base;
	return (nb);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_iterative_power(0, 0)); // 1
	printf("%i\n", ft_iterative_power(2, -1)); // 0
	printf("%i\n", ft_iterative_power(2, 0)); // 1
	printf("%i\n", ft_iterative_power(2, 2)); // 4
	printf("%i\n", ft_iterative_power(-4, 2)); // 16
	printf("%i\n", ft_iterative_power(-4, 3)); // -64
}
*/