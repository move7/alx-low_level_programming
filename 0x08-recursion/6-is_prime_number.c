#include "main.h"
/**
 * checker - check if a number is a prime 
 * @n: number to check
 * @i: iterator
 *
 * Return: 1 if n is prime, otherwise 0
 */
int checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (checker(n, i - 1));
}

/**
 * is_prime_number - if the input integer is a prime number
 * @n: input
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (checker(n, n - 1));
}
