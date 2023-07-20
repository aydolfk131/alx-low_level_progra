#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator  - A function that prints array elements on new
 * @array: Array
 * @size: number of elements
 * @action: pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
