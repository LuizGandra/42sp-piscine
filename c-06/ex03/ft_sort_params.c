#include <unistd.h>

void	print_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	compare(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	sort_args(char *args[], int size)
{
	char	*temp;
	int		i;
	int		j;
	int		swap_count;

	i = 1;
	swap_count = 0;
	while (i < size - 1)
	{
		j = 1;
		while (j < size - i)
		{
			if (compare(args[j], args[j + 1]) > 0)
			{
				temp = args[j];
				args[j] = args[j + 1];
				args[j + 1] = temp;
				swap_count++;
			}
			j++;
		}
		if (!swap_count)
			break ;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		sort_args(argv, argc);
		while (i < argc)
		{
			print_str(argv[i]);
			i++;
		}
	}
}
