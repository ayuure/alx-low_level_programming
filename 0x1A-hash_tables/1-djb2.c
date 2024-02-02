#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string
 *
 * Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_table;
	int c;

	hash_table = 5381;
	while ((c = *str++))
	{
		hash_table = ((hash_table << 5) + hash_table) + c;
	}
	return (hash_table);
}
