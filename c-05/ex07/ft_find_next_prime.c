int	is_prime(int nb)
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

int	ft_find_next_prime(int nb)
{
	if (is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_find_next_prime(-2)); // 2
	printf("%i\n", ft_find_next_prime(0)); // 2
	printf("%i\n", ft_find_next_prime(1)); // 2
	printf("%i\n", ft_find_next_prime(2)); // 2
	printf("%i\n", ft_find_next_prime(3)); // 3
	printf("%i\n", ft_find_next_prime(9)); // 11
	printf("%i\n", ft_find_next_prime(27)); // 29
}
*/