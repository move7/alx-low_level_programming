#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *@n: is the int to be checked
 *Return: last digit
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		n = -1 * n;
	r = n % 10;
	_putchar(r);
	return (r);
}

