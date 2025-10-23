#include "main.h"

/**
 * print_square - prints a square
 * @size: is the size of the square
 *
 * Return: On 0 (success)
 */

void print_square(int size)
{
	int a;
	int b;

	for (a = 0; a < size; a++)
	{
	for (b = 0; b < size; b++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
	if (size <= 0)
	{
	_putchar('\n');
	}
}
