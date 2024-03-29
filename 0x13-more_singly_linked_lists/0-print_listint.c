#include "lists.h"

/**
 * print_listint - prints
 * @h: linked list
 *
 * Return: number
 */
size_t print_listint(const listint_t *h)
{
 size_t n = 0;

 while (h)
 {
 printf("%d\n", h->n);
 n++;
 h = h->next;
 }

 return (n);
}

