#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the deleted elements, otherwise 0
 */
int pop_listint(listint_t **head)
{
listint_t *h = *head;
int n = 0;

if (head)
{
*head = (*head)->next;
n = h->n;
free(h);
}
return (n);
}
