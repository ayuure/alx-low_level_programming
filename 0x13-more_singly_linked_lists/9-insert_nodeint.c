#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * @head: pointer
 * @idx: index
 * @n: data
 *
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *newPointer;
listint_t *t = *head;

newPointer = malloc(sizeof(listint_t));
if (!newPointer || !head)
return (NULL);

newPointer->n = n;
newPointer->next = NULL;

if (idx == 0)
{
newPointer->next = *head;
*head = newPointer;
return (newPointer);
}

for (i = 0; t && i < idx; i++)
{
if (i == idx - 1)
{
newPointer->next = t->next;
t->next = newPointer;
return (newPointer);
}
else
t = t->next;
}

return (NULL);
}

