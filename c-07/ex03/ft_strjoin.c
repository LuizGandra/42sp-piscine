#include <stdlib.h>
#include <stdio.h>

int	get_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	clean(char *buffer, int size)
{
	int	i;
	
	i = 0;
	while (i < size)
		buffer[i++] = 0;
}

char	*append(char *dest, char *src, char *sep)
{
	char	*dest_end;

	dest_end = dest;
	while (*dest_end)
		dest_end++;
	while (*src)
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}
	while (*sep)
	{
		*dest_end = *sep;
		dest_end++;
		sep++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	*ptr;
	int		total_len;
	int		i;

	i = 0;
	total_len = 0;
	while (i < size)
		total_len += get_strlen(strs[i++]);
	result = (char *)malloc((total_len + 1) + (size - 1) * (get_strlen(sep)));
	if (result == NULL)
		return (result);
	clean(result, (total_len + 1) + (size - 1) * (get_strlen(sep)));
	i = 0;
	ptr = result;
	while (i < size)
	{
		if (i != (size - 1))
			ptr = append(result, strs[i++], sep);
		else
			ptr = append(result, strs[i++], "");
	}
	++ptr;
	ptr = '\0';
	return (result);
}


int	main(void)
{
	char	*s1 = "Apple";
	char	*s2 = "Eggs";
	char	*s3 = "Milk";
	char *strs[3] = {s1, s2, s3};
	printf("%s", ft_strjoin(3, strs, ", "));
}
