#include "lists.h"

/**
 * free_listint2 - Function frees a listint_t list.
 * @head: This is pointer to the head of the list.
 * Description: The function sets the head to NULL after freeing all the nodes.
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
