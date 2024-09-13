void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	i = 0;

	ft_rev_int_tab(arr, 5);
	while (i < 5)
	{
		printf("%i", arr[i]);
		if (i < 4)
			printf(", ");
		i++;
	}
}
*/