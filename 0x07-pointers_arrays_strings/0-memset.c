#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: address of memory to be filled
 * @b: constant byte
 * @n: number of bytes to be replaced
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

