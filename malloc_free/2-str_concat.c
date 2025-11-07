#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: char pointer
 *
 * @s2: char pointer
 *
 * Return: strTemp
 */

char *str_concat(char *s1, char *s2)
{
	int c1, c2, i, j;
	char *strTemp;

	c1 = 0;
	c2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[c1] != '\0')
	{
		c1++;
	}
	while (s2[c2] != '\0')
	{
		c2++;
	}
	c2++;
	strTemp = malloc(sizeof(char) * (c1 + c2));
	if (strTemp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c1; i++)
	{
		strTemp[i] =  s1[i];
	}

	for (j = 0; j < c2; j++)
	{
		strTemp[i + j] = s2[j];
	}
	return (strTemp);
}
