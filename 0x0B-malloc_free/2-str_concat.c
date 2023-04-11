#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	result = malloc(sizeof(char) * (i + j + 1));

	if (result == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];
	for (j = 0; s2[j]; j++)
		result[i + j] = s2[j];

	return (result);
}

