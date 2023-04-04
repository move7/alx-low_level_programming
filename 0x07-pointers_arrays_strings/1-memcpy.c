#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is saved
 *@src: memory from which is copied
 *@n: number of bytes
 *
 *Return: a pointer to copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

