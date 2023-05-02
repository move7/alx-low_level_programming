#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: head of the linked list
 * @index: index of the node to be returned
 *
 * Return: pointer to the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *h = head;

while ((i < index) && (h))
{
h = h->next;
i++;
}
if (h)
	return (h);
return (NULL);
}


