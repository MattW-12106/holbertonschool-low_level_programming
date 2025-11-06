#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copying a string as a parameter
 *
 * @str: unsigned int
 *
 * Return: char pointer
 */

char *_strdup(char *str)
{
	char *string;
	unsigned int i, j;

	i = 0;
	j = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	string = malloc(sizeof(char) * (i + 1));

	if (string == NULL)
	{
		return (NULL);
	}

	while (j < i)
	{
		string[j] = str[j];
		j++;
	}

	string[j] = '\0';

return (string);
}
