int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_strlen("12345"));
	printf("%i\n", ft_strlen("123"));
	printf("%i\n", ft_strlen("1234567"));
}
*/