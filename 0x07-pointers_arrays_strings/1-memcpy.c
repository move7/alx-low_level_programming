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
	int i;

	for (i = 0; i < n + 1; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

