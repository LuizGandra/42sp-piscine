char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += ('a' - 'A');
	return (c);
}

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= ('a' - 'A');
	return (c);
}

int	is_alphanumeric(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	change_case;

	i = 0;
	change_case = 0;
	while (str[i])
	{
		if (!is_alphanumeric(str[i]))
			change_case = 1;
		else if (change_case || !i)
		{
			str[i] = to_upper(str[i]);
			change_case = 0;
		}
		else
			str[i] = to_lower(str[i]);
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "  hi, how are you? 42wo#rds forty-two;         fifty+one ";
	printf("%s", ft_strcapitalize(str));
}
*/