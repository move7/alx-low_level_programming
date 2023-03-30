#include "main.h"
/**
  *_strncat - concatenates two strings
  *@dest: input value
  *@src: input value
  *@n: input value
  *Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0'i && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
