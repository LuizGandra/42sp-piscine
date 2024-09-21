#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
		return (NULL);
	i = 0;
	range = (int *)malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (NULL);
	while (min < max)
		range[i++] = min++;
	return (range);
}

/*
#include <stdio.h>
int	main(void)
{
	int *arr = ft_range(-3, 5);
	int	i;

	i = 0;
	while (i < 8)
	{
		printf("%i", arr[i]);
		if (i != 7)
			printf(", ");
		i++;
	}
}
*/