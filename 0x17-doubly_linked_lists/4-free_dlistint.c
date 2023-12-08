#include "lists.h"

/**
 * free_dlistint - frees
 *
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((t = head) != NULL)
	{
		head = head->next;
		free(t);
	}
}
