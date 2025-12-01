#include "lists.h"

/**
 * prints all elements of dlistint_t
 * @h = head dlistint_t
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
