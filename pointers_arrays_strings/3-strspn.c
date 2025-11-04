#include "main.h"

/**
 * _strspn - calculates same chars in a diff string
 *
 * @s: str 1
 * @accept: str 2
 *
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0' && accept[i] != '\0')
	{
		if (s[i] != accept[i])
		{
			break;
		}
	i++;
	}
return (i);
}
