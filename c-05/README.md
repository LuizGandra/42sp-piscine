# C 05
All exercises from list C 05.

## EX00 - ft_iterative_factorial
**Allowed functions:** none

Write an iterative function int	ft_iterative_factorial(int nb) that returns a number. This number should be the result of the factorial operation from the number passed as a parameter. If the argument is not valid, the function should return 0.
*Overflows should not be handled, the function's return will be undefined.*

## EX01 - ft_recursive_factorial
**Allowed functions:** none

Write a recursive function int	ft_recursive_factorial(int nb) that returns a number. This number should be the result of the factorial operation from the number passed as a parameter. If the argument is not valid, the function should return 0.
*Overflows should not be handled, the function's return will be undefined.*

## EX02 - ft_iterative_power
**Allowed functions:** none

Write an iterative function int	ft_iterative_power(int nb, int power) that returns a power of a number. A power less than 0 will return 0, and we have decided that 0 to the power of 0 will return 1.
*Overflows should not be handled, the function's return will be undefined.*

## EX03 - ft_recursive_power
**Allowed functions:** none

Write a recursive function int	ft_recursive_power(int nb, int power) that returns a power of a number. A power less than 0 will return 0, and we have decided that 0 to the power of 0 will return 1.
*Overflows should not be handled, the function's return will be undefined.*

## EX04 - ft_fibonacci
**Allowed functions:** none

Write a recursive function int	ft_fibonacci(int index) that returns the n-th element of the Fibonacci sequence, being the first element with index 0. Let's consider that the Fibonacci sequence starts with 0, 1, 1, 2.
*Overflows should not be handled, the function's return will be undefined. If index is less than 0, the function returns -1.*

## EX05 - ft_sqrt
**Allowed functions:** none

Write a function int	ft_sqrt(int nb) that returns the square root of a number (if it exists), or 0 if the square root is an irrational number.

## EX06 - ft_is_prime
**Allowed functions:** none

Write a function int	ft_is_prime(int nb) that returns 1 if the number passed as a parameter is prime and 0 if it is not.
*0 and 1 are not prime numbers.*

## EX07 - ft_find_next_prime
**Allowed functions:** none

Write a function int	ft_find_next_prime(int nb) that returns the prime number immediately greater than or equal to the number passed as a parameter.
*0 and 1 are not prime numbers.*

## EX08 - ft_ten_queens_puzzle (TODO) ⭐
**Allowed functions:** write

Write a recursive function int	ft_ten_queens_puzzle(void) that shows all the possibilities of positioning ten queens on a 10x10 board without them being able to be hit with a single move, and returns the number of possibilities. Example of return:

```
$>./a.out | cat -e
0257948136$
0258693147$
...
4605713829$
4609582731$
...
9742051863$
```

*The sequence is read from left to right. The first digit corresponds to the position of the first queen in the first column (the index starting with 0). The nth number corresponds to the position of the nth queen in the nth column.*