int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = nb;
	if (!nb)
		return (1);
	if (nb < 0)
		return (0);
	return (factorial * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_recursive_factorial(-2)); // 0
	printf("%i\n", ft_recursive_factorial(0)); // 1
	printf("%i\n", ft_recursive_factorial(5)); // 120
	printf("%i\n", ft_recursive_factorial(9)); // 362880
	printf("%i\n", ft_recursive_factorial(3)); // 6
}
*/