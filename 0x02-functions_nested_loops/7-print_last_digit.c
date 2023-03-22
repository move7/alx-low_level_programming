#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *@n: is the int to be checked
 *Return: last digit
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (n >= 0)
	{
		return (r);
	}
	else
	{
		return (-1 * r);
	}
}
