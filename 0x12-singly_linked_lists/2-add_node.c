#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node
 * @head: double pointer
 * @str: new string
 *
 * Return: the address
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *n;
unsigned int len = 0;

while (str[len])
len++;

n = malloc(sizeof(list_t));
if (!n)
return (NULL);

n->str = strdup(str);
n->len = len;
n->next = (*head);
(*head) = n;

return (*head);
}

