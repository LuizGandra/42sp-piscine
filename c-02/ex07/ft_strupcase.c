char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ('a' - 'A');
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "#UpperCase_String!";
	printf("%s", ft_strupcase(str));
}
*/