#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list_t list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			n++;
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
			n++;
			h = h->next;
		}
	}

	return (n);
}
