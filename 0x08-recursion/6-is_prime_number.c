#include "main.h"
#include <stdio.h>

/**
 * is_divisible - check if n is divisble by i
 * @n: the number to check
 * @i: the divisor
 *
 * Return: 1 if n is divisible by i, 0 otherwise
 */

int is_divisible(int n, int i)
{
	if (i == 1)
		return (0);
	if (i == 2)
		return (1);
	if (n % i == 0)
		return (1);
	return (is_divisible(n, i - 1));
}

/**
 * is_prime_number - check if n is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (is_divisible(n, n - 1))
		return (0);
	return (1);
}
