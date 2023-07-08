#include "hash_tables.h"

/**
 * shash_table_delete - Deletes a hash table.
 * @ht: hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *curr;

	if (ht == NULL)
		return;
	curr = ht->shead;
	while (curr != NULL)
	{
		shash_node_t *next = curr->snext;

		free(curr->key);
		free(curr->value);
		free(curr);
		curr = next;
	}
	free(ht->array);
	free(ht);
}
