#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated
 * @old_size: size of the allocated memory
 * @new_size: new size of the new memory
 *
 * Return: pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_result;
	char *old_ptr;
	unsigned int i, size = old_size;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	ptr_result = malloc(new_size);
	if (ptr_result == NULL)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
		size = new_size;
	for (i = 0; i < size; i++)
		ptr_result[i] = old_ptr[i];
	free(ptr);
	return (ptr_result);
}

