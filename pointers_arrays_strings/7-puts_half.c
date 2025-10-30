#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int length_of_the_string;
	int n;

	length_of_the_string = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length_of_the_string++;
	}

	if (length_of_the_string % 2 == 1)
	{
		n = (length_of_the_string + 1) / 2;
	}
	else
	{
		n = length_of_the_string / 2;
	}
	for (; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
}
