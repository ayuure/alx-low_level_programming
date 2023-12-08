#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes
 *
 * @head: head
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *n1;
	dlistint_t *n2;
	unsigned int j;

	n1 = *head;

	if (n1 != NULL)
		while (n1->prev != NULL)
			n1 = n1->prev;

	j = 0;

	while (n1 != NULL)
	{
		if (j == index)
		{
			if (j == 0)
			{
				*head = n1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				n2->next = n1->next;

				if (n1->next != NULL)
					n1->next->prev = n2;
			}

			free(n1);
			return (1);
		}
		n2 = n1;
		n1 = n1->next;
		j++;
	}

	return (-1);
}
