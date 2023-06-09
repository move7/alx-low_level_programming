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
	unsigned int i, j = 0, length1 = 0, length2 = 0;

	while (s1 && s1[length1])
		length1++;
	while (s2 && s2[length2])
		length2++;
	if (n > length2)
		n = length2;
	result = malloc(sizeof(char) * (length1 + n + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		result[i] = s1[i];
	while (i < (length1 + n))
		result[i++] = s2[j++];

	result[i] = '\0';
	return (result);
}

