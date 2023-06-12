#include "main.h"
#include <stdlib.h>
/**
 * _strdub - duplicate a string
 * @str: the string to duplicate
 * Return: Always 0
 */
char *_strdup(char *str)
{
	int b = 0, j = 1;
	char *c;

	if (str == NULL)
		return (NULL);
	while (str[j])
	{
		j++;
	}

	c = malloc((sizeof(char) * j) + 1);

	if (c == NULL)
		return (NULL);
	while ( b < j)
	{
		c[b] = str[b];
		b++;
	}
	c[b] = '\0';
	return (c);
}
