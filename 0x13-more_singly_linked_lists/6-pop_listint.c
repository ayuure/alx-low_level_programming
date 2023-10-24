#include "lists.h"

/**
 * pop_listint - function
 * @head: pointer
 *
 * Return: the data,or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *t;

int nums;

if (!head || !*head)
	return (0);

nums = (*head)->n;
t = (*head)->next;
free(*head);
*head = t;

return (nums);
}

