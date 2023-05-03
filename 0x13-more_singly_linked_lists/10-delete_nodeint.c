#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at given index
 *	of a listint_t linked list.
 * @head: double pointer to the first head node in the list
 * @index: index of the node to delete
 *
 * Return: (1) if success ELSE (-1)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy = *head;
	unsigned int n;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (n = 0; n < (index - 1); n++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}
