#include "hash_tables.h"

/**
 * make_hash_node - creates a new hash node
 * @key: key for the node
 * @value: for the node
 *
 * Return: the new node, or NULL on failure
 */
hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *n;

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
		return (NULL);
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (NULL);
	}
	n->value = strdup(value);
	if (n->value == NULL)
	{
		free(n->key);
		free(n);
		return (NULL);
	}
	n->next = NULL;
	return (n);
}


/**
 * hash_table_set - sets a key to a value in the hash table
 * @ht: hash table to add elemt to
 * @key: key for the data
 * @value: data to store
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *hash_n, *t;
	char *new_v;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	t = ht->array[i];
	while (t != NULL)
	{
		if (strcmp(t->key, key) == 0)
		{
			new_v = strdup(value);
			if (new_v == NULL)
				return (0);
			free(t->value);
			t->value = new_v;
			return (1);
		}
		t = t->next;
	}
	hash_n = make_hash_node(key, value);
	if (hash_n == NULL)
		return (0);
	hash_n->next = ht->array[i];
	ht->array[i] = hash_n;
	return (1);
}
