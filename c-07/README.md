# C 07
All exercises from list C 07.

## EX00 - ft_strdup
**Allowed functions:** malloc

Write a function char	*ft_strdup(char *src) that reproduces the behavior of the function strdup (man strdup).

## EX01 - ft_range
**Allowed functions:** malloc

Write a function int	*ft_range(int min, int max) that returns an array of ints. This array of ints should contain all values between min (included) and max (excluded).
*If the min value is greather than or equal to the max value, a null pointer is returned.*

## EX02 - ft_ultimate_range
**Allowed functions:** malloc

Write a function int	ft_ultimate_range(int **range, int min, int max) that allocates and assigns an array of ints. This array of ints should contain all values between min (included) and max (excluded). The size of range will be returned (or -1 if there is a problem).
*If the min value is greather than or equal to the max value, range will point to NULL and the function will return 0.*

## EX03 - ft_strjoin
**Allowed functions:** malloc

Write a function char	*ft_strjoin(int size, char **strs, char *sep) that concatenates all the strings pointed to by strs separating them with sep. If size is 0, we need to return a string that we can free().
*The size of strs will be the value of the size parameter.*

## EX04 - ft_convert_base
**Allowed functions:** malloc, free

Write a function char	*ft_convert_base(char *nbr, char *base_from, char *base_to) that returns the result of converting the string nbr expressed in a ´base_from´ base to a ´base_to´ base.
*nbr, base_from and base_to will not necessarily be editable. If a base is incorrect, the function will return NULL.*

The string nbr will follow the same rules as ft_atoi_base, so be careful with '+', '-' and white spaces. Also, the number represented by nbr fits into an int, and the returned number should be prefixed with only one ’-’ if necessary, no whitespaces or ’+’.

## EX05 - ft_split
**Allowed functions:** malloc

Write a function char	**ft_split(char *str, char *charset) that splits a string depending on another string. You will need to use each character in the charset string as a separator, and the function returns an array in which each element contains the address of the string contained between two separators. The last element of this array must be equal to 0 to indicate the end of the array.
*There should be no empty strings in your array. Draw conclusions as needed. The string that will be passed will not be editable.*