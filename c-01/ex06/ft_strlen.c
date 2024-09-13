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
	char	*str = "123456";
	printf("length: %i", ft_strlen(str));
}
*/