char	*ft_strcat(char *dest, char *src)
{
	char	*dest_end;

	dest_end = dest;
	while (*dest_end)
		dest_end++;
	while (*src)
	{
		*dest_end = *src;
		src++;
		dest_end++;
	}
	dest_end = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	dest[] = "strcat ";
	printf("%s", ft_strcat(dest, "example"));
}
*/