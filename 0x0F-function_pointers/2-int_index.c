#include "function_pointers.h"
/**
 * int_index - return index of a given elment if exist, else -1
 * @array: array
 * @size: size of array
 * @cmp:  is a pointer to the function that compare values
 * Return: index of elment if exist else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

