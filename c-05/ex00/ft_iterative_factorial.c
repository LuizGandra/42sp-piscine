int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = nb;
	if (!nb)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
		factorial *= --nb;
	return (factorial);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_iterative_factorial(-2)); // 0
	printf("%i\n", ft_iterative_factorial(0)); // 1
	printf("%i\n", ft_iterative_factorial(5)); // 120
	printf("%i\n", ft_iterative_factorial(9)); // 362880
	printf("%i\n", ft_iterative_factorial(3)); // 6
}
*/