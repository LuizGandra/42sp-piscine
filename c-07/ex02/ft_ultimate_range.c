#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*result;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	result = malloc((size) * sizeof(int));
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	while (min < max)
		result[i++] = min++;
	return (size);
}

/*
#include <stdio.h>
int	main(void)
{
	int	i;
	int	*arr;

	i = 0;
	while (i < ft_ultimate_range(&arr, -3, 5))
	{
		printf("%i", arr[i]);
		if (i != 7)
			printf(", ");
		i++;
	}
}
*/