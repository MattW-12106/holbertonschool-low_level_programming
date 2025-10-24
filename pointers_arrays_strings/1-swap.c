#include "main.h"

/**
 * swap_int - swaps the values of int
 * @a: int being swapped
 * @b: int being swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
