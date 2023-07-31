#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - This finds a given node in a linked list.
 * @head : Pointer to the head of the Linked list.
 * @index: index of the node to find (indices starting at 0)
 *
 * Return: Pointer to the desired node or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
		head = head->next;

	if (n < index)
		return (NULL);

	return (head);
}
