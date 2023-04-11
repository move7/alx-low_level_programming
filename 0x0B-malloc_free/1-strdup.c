#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - new allocated space in memory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	return (dup);
}

