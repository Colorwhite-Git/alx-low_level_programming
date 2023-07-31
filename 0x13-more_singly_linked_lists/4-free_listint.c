#include "lists.h"
#include <stdio.h>

/**
 * free_listint - It frees a linked list
 * @head: The head of the list
 *
 * Return: Should be void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
