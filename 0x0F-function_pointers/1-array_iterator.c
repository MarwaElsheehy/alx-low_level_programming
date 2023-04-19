#include "function_pointers.h"
/**
 * arrat_iterator - the count of the array
 * @array: the array that counted
 * @size: the size of the array
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
