#include "lists.h"

/**
 * listint_len - function
 * @h: linked list
 *
 * Return: number
 */
size_t listint_len(const listint_t *h)
{
size_t n = 0;

while (h)
{
n++;
h = h->next;
}

return (n);
}
