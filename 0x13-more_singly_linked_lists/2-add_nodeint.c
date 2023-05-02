#include "lists.h"
/**
 *add_nodeint - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@n: elment to add to the header
 *
 *Return: pointer to the new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);
	node->n = n;
	if (head)
		node->next = *head;
	*head = node;
	return (head);
}
