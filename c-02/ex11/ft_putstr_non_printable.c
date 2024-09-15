#include <unistd.h>
#define HEX_CHARS "0123456789abcdef"

void	print_hex(char c)
{
	write(1, "\\", 1);
	write(1, &HEX_CHARS[c / 16], 1);
	write(1, &HEX_CHARS[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str > '~')
			print_hex(*str);
		else
			write(1, str, 1);
		str++;
	}
}

/*
int	main(void)
{
	char	str[] = "Oi\nvoce esta bem?";
	ft_putstr_non_printable(str);
}
*/