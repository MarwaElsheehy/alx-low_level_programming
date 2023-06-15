#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * @n: the first byte
 * Return: the two strings concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, c = 0, d = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[c])
		c++;

	if (n >= c)
		d = a + c;
	else
		d = a + n;

	p = malloc(sizeof(char) * d + 1);
	if (p == NULL)
		return (NULL);

	c = 0;
	while (b < d)
	{
		if (b <= a)
			p[b] = s1[b];
		if (b >= a)
		{
			p[b] = s2[c];
			c++;
		}
		b++;
	}
	p[b] = '\0';
	return (p);
}
