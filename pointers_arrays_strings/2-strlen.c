#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: the string
 *
 * Return: string length i
 */

int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
	i++;
	}
	return (i);
}
