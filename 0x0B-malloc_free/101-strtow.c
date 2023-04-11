#include <stdlib.h>
#include "main.h"
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **result, *tmp;
	int i, k = 0, space, length = 0, words = 0, c = 0, start;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			space = 1;
		else if (space == 1)
		{ words++;
			space = 0;
		}
		length++;
	}
	if (words == 0)
		return (NULL);
	result = (char **) malloc(sizeof(char *) * (words + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < i)
					*tmp++ = str[start++];
				*tmp = '\0';
				result[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	result[k] = NULL;
	return (result);
}

