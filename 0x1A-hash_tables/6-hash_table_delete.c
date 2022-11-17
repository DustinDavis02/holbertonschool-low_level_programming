#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: table to delete
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL, *temp2 = NULL;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		temp2 = ht->array[i];
		while (temp)
		{
			temp = temp2;
			temp2 = temp2->next;
			if (temp->key != NULL)
				free(temp->key);
			if (temp->value != NULL)
				free(temp->value);
			free(temp);
		}
		free(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}
