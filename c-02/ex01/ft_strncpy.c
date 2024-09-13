char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	dest[] = "123456789";
	ft_strncpy(dest, "example", 8);
	printf("%s\n", dest);
}
*/