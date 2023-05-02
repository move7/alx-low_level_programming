#include "lists.h"
/**
*add_nodeint_end-  a new node at the end of a list
*@head: pointer to the head
*@n: element to be added to the list
*
*Return: address of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = (listint_t *)malloc(sizeof(listint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (!*head)
	{
		*head = node;
		return (node);
	}
	else
	{
		listint_t *h = *head;

		while (h->next)
			h = h->next;
		h->next = node;
		return (node);
	}
}
