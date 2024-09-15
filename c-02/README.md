# C 02
All exercises from list C 02.

## EX00 - ft_strcpy
**Allowed functions:** none

Write a function char	*ft_strcpy(char *dest, char *src) that reproduces the behavior of the function strcpy (man strcpy).

## EX01 - ft_strncpy
**Allowed functions:** none

Write a function char	*ft_strncpy(char *dest, char *src, unsigned int n) that reproduces the behavior of the function strncpy (man strncpy).

## EX02 - ft_str_is_alpha
**Allowed functions:** none

Write a function int	ft_str_is_alpha(char *str) that returns 1 if the string passed as parameter contains only alphabetic characters and returns 0 if the string contains other types of characters.
*The function should return 1 if str is an empty string.*

## EX03 - ft_str_is_numeric
**Allowed functions:** none

Write a function int	ft_str_is_numeric(char *str) that returns 1 if the string passed as parameter contains only numbers and returns 0 if the string contains other types of characters.
*The function should return 1 if str is an empty string.*

## EX04 - ft_str_is_lowercase
**Allowed functions:** none

Write a function int	ft_str_is_lowercase(char *str) that returns 1 if the string passed as parameter contains only lowercase alphabetic characters and returns 0 if the string contains other types of characters.
*The function should return 1 if str is an empty string.*

## EX05 - ft_str_is_uppercase
**Allowed functions:** none

Write a function int	ft_str_is_uppercase(char *str) that returns 1 if the string passed as parameter contains only uppercase alphabetic characters and returns 0 if the string contains other types of characters.
*The function should return 1 if str is an empty string.*

## EX06 - ft_str_is_printable
**Allowed functions:** none

Write a function int	ft_str_is_printable(char *str) that returns 1 if the string passed as parameter contains only printable characters and returns 0 if the string contains other types of characters.
*The function should return 1 if str is an empty string.*

## EX07 - ft_strupcase
**Allowed functions:** none

Write a function char	*ft_strupcase(char *str) that converts all letters to uppercase and returns str.

## EX08 - ft_strlowcase
**Allowed functions:** none

Write a function char	*ft_strlowcase(char *str) that converts all letters to lowercase and returns str.

## EX09 - ft_strcapitalize
**Allowed functions:** none

Write a function char	*ft_strcapitalize(char *str) that capitalizes the first letter of each word and lowercases the rest of the word. The function must return str. Example:

```
"  hi, how are you? 42wo#rds forty-two;         fifty+one ";
```

Capitalized:

```
"  Hi, How Are You? 42wo#Rds Forty-Two;         Fifty+One ";
```

*A word is a string of alphanumeric characters.*

## EX10 - ft_strlcpy
**Allowed functions:** none

Write a function unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size) that reproduces the behavior of the function strlcpy (man strlcpy).

## EX11 - ft_putstr_non_printable
**Allowed functions:** write

Write a function void	ft_putstr_non_printable(char *str) that displays a string of characters on the screen. If this string contains non-printable characters, they should be displayed in hexadecimal form (in lowercase) preceded by a backslash. Example:

For this string,

```
Hi\nhow are you?
```

The function should display:

```
Hi\0ahow are you?
```

## EX12 - ft_print_memory (TODO)
**Allowed functions:** write

Write a function void	*ft_print_memory(void *addr, unsigned int size) that displays a memory area on the screen. It should return addr.

The output should be divided into three "columns" separated by a space:

1. The address of the first character of the line in hexadecimal followed by a ':'.
2. The content in hexadecimal with a space between two characters. It must be completed with spaces if necessary.
3. The content in printable characters.

*If a character is non-printable, it should be replacede by a period. Each line must handle sixteen characters and if size is equal to zero, nothing will be displayed.*

```
$> ./ft_print_memory
000000010a161f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin
000000010a161f50: 6368 6573 090a 0963 0720 6573 7420 666f ches...c. est fo
000000010a161f60: 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on
000000010a161f70: 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.
000000010a161f80: 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..
000000010a161f90: 0a09 6c6f 6c2e 6c6f 6c0a 2000 ..lol.lol. .
```

```
$> ./ft_print_memory | cat -te
0000000107ff9f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin$
0000000107ff9f50: 6368 6573 090a 0963 0720 6573 7420 666f ches...c. est fo$
0000000107ff9f60: 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on $
0000000107ff9f70: 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.$
0000000107ff9f80: 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..$
0000000107ff9f90: 0a09 6c6f 6c2e 6c6f 6c0a 2000 ..lol.lol. .$
$>
```