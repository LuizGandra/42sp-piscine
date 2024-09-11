#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_nbr(int n)
{
	ft_putchar((n / 10) + '0');
	ft_putchar((n % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_nbr(a);
			ft_putchar(' ');
			print_nbr(b);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
}
*/