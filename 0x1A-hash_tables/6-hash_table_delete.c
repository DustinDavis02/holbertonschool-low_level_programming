#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes hash table
 * @ht: is hash table
 * Return: nada
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *tmp, *next_tmp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				next_tmp = tmp;
				tmp = tmp->next;
				free(next_tmp->key);
				free(next_tmp->value);
				free(next_tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
