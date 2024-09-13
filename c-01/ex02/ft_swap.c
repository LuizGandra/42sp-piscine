void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>
int	main(void)
{
	int	n1 = 1;
	int	n2 = -2;

	ft_swap(&n1, &n2);
	printf("n1: %i, n2: %i\n", n1, n2);
}
*/