#include "main.h"

/**
 * factorial - returns the factorial of a num
 *
 * @n: int
 *
 * Return: 1 on success, -1 on failure
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (1);
}
