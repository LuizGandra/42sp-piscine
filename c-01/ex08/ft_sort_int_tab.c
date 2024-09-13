void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;
	int	swap_count;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		swap_count = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
				swap_count++;
			}
			j++;
		}
		if (!swap_count)
			break ;
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int	arr[] = {-2, 512, 42, 0, 21, 2, -21};
	int	i = 0;

	ft_sort_int_tab(arr, 7);
	while (i < 7)
	{
		printf("%i", arr[i]);
		if (i < 6)
			printf(", ");
		i++;
	}
}
*/