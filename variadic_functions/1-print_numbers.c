#include "variadic_functions.h"
#include "stdio.h"

/**
 * print_numbers - prints numbers seperated by seperator
 *
 * @seperator: str between numbers
 * @n: number of args
 *
 * Return: void
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));

		if (seperator != NULL && i < n - 1)
		{
			printf("%s", seperator);
		}
	}
	putchar('\n');

va_end(ap);
}
