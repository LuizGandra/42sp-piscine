void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	ft_div_mod(10, 3, &a, &b);
	printf("div: %i, mod: %i", a, b);
}
*/