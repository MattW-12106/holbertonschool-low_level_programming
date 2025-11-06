#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_array - creates an array of chars
 *
 * @size: unsinged int
 * @c: char
 *
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *character;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	character = malloc(sizeof(char) * size);

	if (character == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		character[i] = c;
		i++;
	}

	character[i] = '\0';

return (character);
}
