#include "hash_tables.h"
/**
 * shash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: a pointer to the newly created hash table.
 *         If something went wrong, return NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		if (ht->shead == NULL)
		{
			ht->shead = new_node;
			ht->stail = new_node;
		}
		else if (strcmp(new_node->key, ht->shead->key) < 0)
		{
			new_node->snext = ht->shead;
			ht->shead->sprev = new_node;
			ht->shead = new_node;
		}
		else if (strcmp(new_node->key, ht->stail->key) > 0)
		{
			new_node->sprev = ht->stail;
			ht->stail->snext = new_node;
			ht->stail = new_node;
		}
		else
		{
			shash_node_t *curr = ht->shead;

			while (curr != NULL)
			{
				if (strcmp(new_node->key, curr->key) < 0)
				{
					new_node->sprev = curr->sprev;
					new_node->snext = curr;
					curr->sprev->snext = new_node;
					curr->sprev = new_node;
					break;
				}
				curr = curr->snext;
			}
		}
		return (1);
	}
	shash_node_t *curr = ht->array[index];

	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			return (1);
		}
		curr = curr->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(new_node->key, ht->shead->key) < 0)
	{
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else if (strcmp(new_node->key, ht->stail->key) > 0)
	{
		new_node->sprev = ht->stail;
		ht->stail->snext = new_node;
		ht->stail = new_node;
	}
	else
	{
		shash_node_t *curr = ht->shead;

		while (curr != NULL)
		{
			if (strcmp(new_node->key, curr->key) < 0)
			{
				new_node->sprev = curr->sprev;
				new_node->snext = curr;
				curr->sprev->snext = new_node;
				curr->sprev = new_node;
				break;
			}
			curr = curr->snext;
		}
	}
	return (1);
}
/**
 * shash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *curr;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	shash_node_t *curr = ht->array[index];

	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}
/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: the hash table.
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr;

	if (ht == NULL)
		return;
	curr = ht->shead;
	printf("{");
	while (curr != NULL)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		if (curr->snext != NULL)
			printf(", ");
		curr = curr->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_prev - Prints a sorted hash table in reverse order.
 * @ht: the hash table.
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr;

	if (ht == NULL)
		return;
	curr = ht->stail;
	printf("{");
	while (curr != NULL)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		if (curr->sprev != NULL)
			printf(", ");
		curr = curr->sprev;
	}
	printf("}\n");
}
/**
 * hash_table_delete - Deletes a hash table.
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

