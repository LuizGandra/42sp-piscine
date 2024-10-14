unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size > 0)
	{
		i = 0;
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

/*
#include <stdio.h>
int	main(void)
{
	char	dest[48] = "123456789";
	printf("src len: %i\n", ft_strlcpy(dest, "source string!", 48));
	printf("dest: %s\n", dest);
}
*/
