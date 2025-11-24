#include "lists.h"
#include <stdio.h>

/**
* list_len - Return number of elements
*
* @h: Points to struct
*
* Return: Number of elements in linked list
*/

size_t list_len(const list_t *h)
{
	unsigned int i = 0;
	const list_t *list;

	list = malloc(sizeof(list_t));

	list = h;

	if (list == NULL)
	{
		return (0);
	}
	while (list != NULL)
	{
		list = list->next;
		i++;
	}
	return (i);
}
