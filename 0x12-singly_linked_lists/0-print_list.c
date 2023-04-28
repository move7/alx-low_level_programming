#include <stdio.h>
#include "lists.h"

/**
 * _strlen - length of a given string
 * @str: String
 *
 * Return: the length of the str
 */
int _strlen(char *str)
{
	int length = 0;

	if (!str)
		return (0);
	while (*str++)
		length++;
	return (length);
}

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to be printed
 *
 * Return: the number of printed node
 */
size_t print_list(const list_t *h)
{
	size_t sum = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", _strlen(h->str), h->str);
		h = h->next;
		sum++;
	}
	return (sum);
}

