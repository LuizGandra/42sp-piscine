char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find[i])
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
		{
			if (!to_find[j + 1])
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strstr("str strstr example", "strs")); // strstr example
	printf("%s\n", ft_strstr("empty to_find", "")); // empty to_find
}
*/