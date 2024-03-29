#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: double pointer to the head of the list
 * @n: integer to add to the list
 *
 * Return: address to the new node else NULL if error
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}

	return (*head);
}
