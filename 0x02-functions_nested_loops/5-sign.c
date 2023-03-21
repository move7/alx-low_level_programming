#include "main.h"
/**
 * print_sign - check if number is greater or less than zero
 *@n: is the int to be checked
 *Return: 1 if greater than zero
 *0  if n equal to Zero and -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
