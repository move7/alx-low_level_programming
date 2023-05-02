#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node in a list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the node is added
 * @n: data to insert in the node
 *
 * Return: pointer to the node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *node = malloc(sizeof(listint_t));
listint_t *h = *head;

if (!node || !head)
return (NULL);
node->n = n;
node->next = NULL;
if (idx == 0)
{
node->next = *head;
*head = node;
return (node);
}
while (i < (idx - 2) && h)
{
i++;
h = h->next;
}
if (h)
{
node->next = h->next;
h->next = node;
return (node);
}
return (NULL);
}

