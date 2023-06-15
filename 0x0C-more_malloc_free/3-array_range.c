#include "main.h"
#include <stdlib.h>
/**
 * array_range -  creates an array of integers
 * @max: the biggest value
 * @min: the smallest value
 * Return: integer value
 */
int *array_range(int min, int max)
{
	int *i, j = 0;

	if (min > max)
		return (NULL);

	i = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (i == NULL)
		return (NULL);

	while (min <= max)
	{
		i[j] = min;
		j++;
		min++;
	}
	return (i);
}
