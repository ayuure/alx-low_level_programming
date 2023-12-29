#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts
 *
 * @h: head
 * @idx: index
 * @n: value
 * Return: the address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *news;
	dlistint_t *heads;
	unsigned int j;

	news = NULL;
	if (idx == 0)
		news = add_dnodeint(h, n);
	else
	{
		heads = *h;
		j = 1;
		if (heads != NULL)
			while (heads->prev != NULL)
				heads = heads->prev;
		while (heads != NULL)
		{
			if (j == idx)
			{
				if (heads->next == NULL)
					news = add_dnodeint_end(h, n);
				else
				{
					news = malloc(sizeof(dlistint_t));
					if (news != NULL)
					{
						news->n = n;
						news->next = heads->next;
						news->prev = heads;
						heads->next->prev = news;
						heads->next = news;
					}
				}
				break;
			}
			heads = heads->next;
			j++;
		}
	}

	return (news);
}
