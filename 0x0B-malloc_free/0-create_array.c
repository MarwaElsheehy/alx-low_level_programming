#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @c: the char to fill in the array
 * Return: the array filled
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *n;

	if (size == 0)
		return (NULL);
	n = malloc(size * sizeof(char));

	if (n == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
	{
		n[j] = c;
	}

	return (n);
}
