#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node
 *
 * @head: The Pointer to the Head of the Linked List
 * Return: head node's data (n), 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	int n;

	temp = *head;

	if (temp == NULL)
		return (0);

	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
