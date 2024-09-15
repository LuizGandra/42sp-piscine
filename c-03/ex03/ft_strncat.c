char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dest_len;

	i = 0;
	dest_len = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[i] && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	while (i < nb)
	{
		dest[dest_len + i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	dest[20] = "strncat ";
	printf("%s", ft_strncat(dest, "exampleeeeee", 7));
}
*/