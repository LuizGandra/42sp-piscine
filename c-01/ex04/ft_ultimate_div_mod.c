void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a /= *b;
	*b = temp % *b;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a = 10;
	int	b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf("a: %i, b: %i", a, b);
}
*/