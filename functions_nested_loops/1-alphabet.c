#include "main.h"

/**
 * print_alphabet - prints 10 times the alphabet
 *
 * Return: On success 1.
 */

void print_alphabet(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
