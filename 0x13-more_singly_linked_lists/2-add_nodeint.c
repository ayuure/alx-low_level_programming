
#include "lists.h"

/**
 * add_nodeint - function
 *@head: pointer
 * @n: data
 *
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newPointer;

	newPointer = malloc(sizeof(listint_t));
	if (!newPointer)
		return (NULL);

	newPointer->n = n;
	newPointer->next = *head;
	*head = newPointer;

	return (newPointer);
}

