#include "lists.h"

/**
 * add_nodeint_end - function
 * @head: pointer
 * @n: data
 *
 * Return: pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newPointer;
	listint_t *t = *head;

	newPointer = malloc(sizeof(listint_t));
	if (!newPointer)
	return (NULL);

	newPointer->n = n;
	newPointer->next = NULL;

	if (*head == NULL)
	{
		*head = newPointer;
		return (newPointer);
	}

	while (t->next)
	t = t->next;

	t->next = newPointer;

	return (newPointer);
}
