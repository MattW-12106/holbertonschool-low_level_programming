#include "main.h"

/**
 * _strncpy - copies n amount of numbers from src and dest
 *
 * @dest: destination
 * @src: source
 * @n: number of characters
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

return (dest);
}
