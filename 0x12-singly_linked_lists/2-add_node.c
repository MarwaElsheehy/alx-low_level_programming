#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
<<<<<<< HEAD
       	list_t *n;
	unsigned int l = 0;

       	while (str[l])
	l++;
	
	n = malloc(sizeof(list_t));
       	if (!n)
	return (NULL);
       	n->str = strdup(str);
       	n->l = l;
       	n->next = (*head);
	(*head) = n;
       	return (*head);
=======
 list_t *new;
 unsigned int len = 0;

 while (str[len])
 len++;

 new = malloc(sizeof(list_t));
 if (!n)
 return (NULL);

 new->str = strdup(str);
 new->len = len;
 new->next = (*head);
 (*head) = new;

 return (*head);
>>>>>>> f9fe04a227ce3a95847fe9dec4c710adcd492f08
}

