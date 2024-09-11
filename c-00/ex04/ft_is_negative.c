#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}

/*
int	main(void)
{
	ft_is_negative(-2); // N
	ft_is_negative(0); // P
	ft_is_negative(11); // P
}
*/