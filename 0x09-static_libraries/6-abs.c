#include "main.h"
/**
 * _abs - check if number is greater or less than zero
 *@n: is the int to be checked
 *Return: absolute vakue of n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}

