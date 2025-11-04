#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 *
 * @s: char pointer
 *
 * @accept: char pointer
 *
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{

			if (*s == accept[i])
				return (s);
		}
	}
	return (0);
}
