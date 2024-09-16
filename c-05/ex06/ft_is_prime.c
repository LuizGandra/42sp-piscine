int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_is_prime(-2)); // 0
	printf("%i\n", ft_is_prime(0)); // 0
	printf("%i\n", ft_is_prime(1)); // 0
	printf("%i\n", ft_is_prime(2)); // 1
	printf("%i\n", ft_is_prime(3)); // 1
	printf("%i\n", ft_is_prime(9)); // 0
	printf("%i\n", ft_is_prime(29)); // 1
}
*/