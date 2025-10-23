#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int s;

	for (i = 1; i <= n; i++)
	{
	for (s = 2; s <= i; s++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	if (n < 1)
	_putchar('\n');
}
