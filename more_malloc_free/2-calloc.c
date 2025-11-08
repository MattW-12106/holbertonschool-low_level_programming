#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: bytes of each element
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *strArray;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	strArray = malloc(nmemb * size);

	if (strArray == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < (nmemb * size))
	{
		strArray[i] = 0;
		i++;
	}
	return (strArray);
}
