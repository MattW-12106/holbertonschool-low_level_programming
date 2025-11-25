#include "lists.h"

/**
 * add_node_end - adds node to end of a linked list
 * @head: double ptr
 * @str: ptr
 * Return: address of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *tmp;
	unsigned int len = 0;

	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);

	end->str = strdup(str);
	if (end->str == NULL)
	{
		free(end);
		return (NULL);
	}

	while (str[len])
		len++;

	end->len = len;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = end;

	return (end);
}
