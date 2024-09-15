# C 04
All exercises from list C 04.

## EX00 - ft_strlen
**Allowed functions:** none

Write a function int	ft_strlen(char *str) that counts and returns the number of characters in a string.

## EX01 - ft_putstr
**Allowed functions:** write

Write a function void	ft_putstr(char *str) that displays a string of characters on standard output.

## EX02 - ft_putnbr
**Allowed functions:** write

Write a function void	ft_putnbr(int nb) that displays a number passed as a parameter. The function must be able to represent all possible values ​​in an int type variable.

## EX03 - ft_atoi
**Allowed functions:** none

Write a function int	ft_atoi(char *str) that convert the beginning of a string pointed to by str to an integer of type int. The string str must follow some rules:

1. str can start with an arbitrary number of white spaces.
2. str can then be followed by an arbitraty number of **+** signs and **-** signs. The **-** sign will change the sign of the returned integer depending on the number of **-** signs and whether it is even or odd.
3. Finally, str must be composed of base 10 numbers.
*The function should read str as long as it follows the rules above and it should return the number found so far.*

You should not consider overflows and underflows, the result is considered undefined in these cases.

Example:

```
$>./a.out " ---+--+1234ab567"
-1234
```

## EX04 - ft_putnbr_base ⭐
**Allowed functions:** write

Write a function void	ft_putnbr_base(int nbr, char *base) that displays a number on the terminal in a given base. This number is given as an int and the base as a string. The base contains all the symbols that can be used to display the number. Examples:

- 0123456789 is a decimal base.
- 01 is a binary base.
- 0123456789ABCDEF is a hexadecimal base.
- poneyvif is an octal base.

The function must handle negative numbers. Also, if a parameter contains an error, the function will not display anything. An error can be:

- the base is empty or of size 1.
- the base contains the same character twice.
- the base contains the characters + or -.

## EX05 - ft_atoi_base (TODO) ⭐
**Allowed functions:** none

Write a function int	ft_atoi_base(char *str, char *base) that convert the beginning of a string pointed to by str to an integer of type int. The string str is in a specific base passed as the second argument of the function.
*Except for the base system, this function should reproduce the behavior of ft_atoi.*

If a parameter contains an error, the function returns 0. An error can be:

- the base is empty or of size 1.
- the base contains the same character twice.
- the base contains the characters + or - or white spaces.