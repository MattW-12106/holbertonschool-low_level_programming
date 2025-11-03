#include "main.h"

/**
 * reverse_array - reverse array
 *
 * @a: array
 * @n: int
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	j = 0;

	n -= 1;

	while (i <= n)
	{
		j = a[n];
		a[n--] = a[i];
		a[i++] = j;
	}
}
