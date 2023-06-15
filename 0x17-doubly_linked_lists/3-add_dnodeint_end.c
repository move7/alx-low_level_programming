#include "lists.h"

/**
 * add_dnodeint_end - Adds a node node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the node node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the node node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *last;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = node;
	node->prev = last;

	return (node);
}
