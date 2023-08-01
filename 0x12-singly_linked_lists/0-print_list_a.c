#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * struct list_s - Entry point for singly linked list
 * @str: string - (malloc string)
 * @len: The string's length
 * @next: The points to the next node
 *
 * Description: Singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str)

{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return NULL;
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return NULL;
	}

	new_node->len = strlen(str);

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
