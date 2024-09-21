#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(i + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "strdup example";
	printf("String address: %p\n", str);
	printf("Duplicated string address: %p\n", ft_strdup(str));
	printf("Duplicated string address: %s\n", ft_strdup(str));
}
*/