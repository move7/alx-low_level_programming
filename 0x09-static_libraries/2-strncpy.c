#include "main.h"
/**
 *_strncpy -  copy a string
  *@dest: input value
  *@src: input value
  *@n: input vqlue
  *Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
