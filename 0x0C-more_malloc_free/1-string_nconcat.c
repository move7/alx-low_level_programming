#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates string to n bytes of another string
 * @s1: string to append to
 * @s2: string 2
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, length1 = 0, length2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
		length1++;
	for (i = 0; s2[i] != '\0'; i++)
		length2++;
	if (n > length2)
		n = length2;
	result = malloc(sizeof(char) * (length1 + n + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		result[i] = s1[i];
	for (i = 0; i < n; i++)
		result[length1 + i] = s2[i];
	result[n + i] = '\0';
	return (result);
}

