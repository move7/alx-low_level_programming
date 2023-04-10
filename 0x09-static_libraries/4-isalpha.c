#include "main.h"
/**
 * _isalpha - check if char is alpha
 *@c: is the char to be checked
 *Return: 1 if char is alpha, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

