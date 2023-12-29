#include "lists.h"

/**
 * add_dnodeint - adds
 *
 * @head: head
 * @n: value
 * Return: ne
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ne;
	dlistint_t *heads;

	ne = malloc(sizeof(dlistint_t));
	if (ne == NULL)
		return (NULL);

	ne->n = n;
	ne->prev = NULL;
	heads = *head;

	if (heads != NULL)
	{
		while (heads->prev != NULL)
			heads = heads->prev;
	}

	ne->next = heads;

	if (heads != NULL)
		heads->prev = ne;

	*head = ne;

	return (ne);
}
