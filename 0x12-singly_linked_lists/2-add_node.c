#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * _strlen - returns the length of a string.
 * @s: input string
 * Return: (Success)
 */

int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to head of linked list
 * @str: string to add
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *t;

	t = (malloc(sizeof(list_t)));
	if (!t)
	{
		free(t);
		return (NULL);
	}
	if (*head == NULL)
	{
		t->next = *head;
		t->str = strdup(str);
		t->len = _strlen(str);
		*head = t;
	} else
	{
		t->next = *head;
		t->str = strdup(str);
		t->len = _strlen(str);
		*head = t;
	}
	return (*head);
}
