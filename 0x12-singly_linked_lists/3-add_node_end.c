#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: A pointer the head.
 * @str: The string to be added.
 *
 * Return: NULL if function fails
 *         Else, address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *d;
	int len;
	list_t *n, *l;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	d = strdup(str);
	if (str == NULL)
	{
		free(n);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	n->str = dup;
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
		*head = n;

	else
	{
		l = *head;
		while (l->next != NULL)
			l = l->next;
		l->next = n;
	}

	return (*head);
}
