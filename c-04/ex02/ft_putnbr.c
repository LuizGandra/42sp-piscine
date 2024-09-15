#include <unistd.h>

void	print_nbr(long long nb)
{
	char	c;

	if (nb > 9)
		print_nbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

// long long guarantees 64-bit on any system
void	ft_putnbr(int nb)
{
	long long	long_nb;

	long_nb = nb;
	if (long_nb < 0)
	{
		write(1, "-", 1);
		long_nb = -long_nb;
	}
	print_nbr(long_nb);
}

/*
#include <stdio.h>
int	main(void)
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(2147483647);
}
*/