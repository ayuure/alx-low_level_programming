#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *heads;
	dlistint_t *ne;

	ne = malloc(sizeof(dlistint_t));
	if (ne == NULL)
		return (NULL);

	ne->n = n;
	ne->next = NULL;

	heads = *head;

	if (heads != NULL)
	{
		while (heads->next != NULL)
			heads = heads->next;
		heads->next = ne;
	}
	else
	{
		*head = ne;
	}

	ne->prev = heads;

	return (ne);
}
