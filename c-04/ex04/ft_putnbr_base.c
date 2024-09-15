#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if ((base[i] <= ' ' || base[i] > '~')
			|| base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	parse_nbr(long long n, int len, char *base)
{
	if (n >= len)
		parse_nbr(n / len, len, base);
	write(1, &base[n % len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	long_nbr;
	int			base_len;

	base_len = check_base(base);
	if (base_len > 1)
	{
		long_nbr = nbr;
		if (long_nbr < 0)
		{
			write(1, "-", 1);
			long_nbr = -long_nbr;
		}
		parse_nbr(long_nbr, base_len, base);
	}
}

/*
#include <stdio.h>
int	main(void)
{
	ft_putnbr_base(8, "01"); // 1000
	printf("\n");
	ft_putnbr_base(-64, "0123456789"); // -64
	printf("\n");
	ft_putnbr_base(2748, "0123456789ABCDEF"); // ABC
	printf("\n");
	ft_putnbr_base(-346, "poneyvif"); // -ven
	printf("\n");
	ft_putnbr_base(100, "011"); // the function doesn't display anything
	printf("\n");
	ft_putnbr_base(1000, "01+1"); // the function doesn't display anything
}
*/