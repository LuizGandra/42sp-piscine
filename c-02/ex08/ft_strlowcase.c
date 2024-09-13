char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += ('a' - 'A');
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "#lOweRcASE_strING!";
	printf("%s", ft_strlowcase(str));
}
*/