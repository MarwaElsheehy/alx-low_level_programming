#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array
 * @nmemb: number of members
 * @size: size
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, d = 0;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	d = nmemb * size;
	c = malloc(d);

	if (c == NULL)
		return (NULL);

	while (a < d)
	{
		c[a] = 0;
		a++;
	}
	return (c);
}
