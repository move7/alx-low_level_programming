#include "lists.h"

/**
 * sum_listint - calculates the sum of all element of the list
 * @head: first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
