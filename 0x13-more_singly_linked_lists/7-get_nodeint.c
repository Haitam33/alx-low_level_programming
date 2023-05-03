#include "lists.h"

/**
 * get_nodeint_at_index - locates a node of a linked list.
 * @head: pointer to the first node in the list
 * @index: index of the node to locate
 *
 * Return: pointer to the indexed node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int s;

	if (head == NULL)
		return (NULL);
	for (s = 0; s < index; s++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
