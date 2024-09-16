int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*
#include <stdio.h>
int	main(void)
{
	// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,
	// 233, 377, 610, 987, 1597, 2584, 4181
	printf("%i\n", ft_fibonacci(-10)); // -1
	printf("%i\n", ft_fibonacci(0)); // 0
	printf("%i\n", ft_fibonacci(5)); // 5
	printf("%i\n", ft_fibonacci(9)); // 34
	printf("%i\n", ft_fibonacci(12)); // 34
	printf("%i\n", ft_fibonacci(19)); // 4181
}
*/