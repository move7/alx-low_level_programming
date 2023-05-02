#include "lists.h"
/**
 *listint_len - calculate lenght of a list
 *@h: linked list
 *
 *Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
