#include "lists.h"

/**
 * dlistint_len - returns the number of list length
 * @h: head
 * Return: num of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
return (c);
}
