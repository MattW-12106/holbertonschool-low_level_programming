#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s - the string
 *
 * Return: void
 */

int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
	i++;
	s++;
	}
	return (i);
}
