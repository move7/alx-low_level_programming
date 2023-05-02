#include "lists.h"
/**
/**
* insert_nodeint_at_index - inserts a node in a list,
* insert_nodeint_at_index - inserts a new node in a linked list,
* at a given position
* at a given position
* @head: pointer to the first node in the list
* @head: pointer to the first node in the list
* @idx: index where the node is added
* @idx: index where the new node is added
* @n: data to insert in the node
* @n: data to insert in the new node
*
* Return: pointer to the node, or NULL
* Return: pointer to the new node, or NULL
*/
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
{
unsigned int i = 0;
unsigned int i;
listint_t *node = malloc(sizeof(listint_t));
listint_t *new;
listint_t *h = *head;
listint_t *temp = *head;
new = malloc(sizeof(listint_t));
if (!node || !head)
if (!new || !head)
return (NULL);
return (NULL);
node->n = n;
new->n = n;
node->next = NULL;
new->next = NULL;
if (idx == 0)
if (idx == 0)
{
{
node->next = *head;
new->next = *head;
*head = node;
*head = new;
return (node);
return (new);
}
}
for (i = 0; h && i < idx; i++)
for (i = 0; temp && i < idx; i++)
{
{
if (i == idx - 1)
if (i == idx - 1)
{
{
node->next = h->next;
new->next = temp->next;
h->next = node;
temp->next = new;
return (node);
return (new);
}
}
else
else
h = h->next;
temp = temp->next;
}
}
return (NULL);
return (NULL);
}
}
