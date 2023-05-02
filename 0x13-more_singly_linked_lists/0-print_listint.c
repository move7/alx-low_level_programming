#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 *@h : linked list
 *
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
