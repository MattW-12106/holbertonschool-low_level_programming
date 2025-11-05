#include "main.h"

/**
 * _puts_recursion - prints a string using a recursion
 *
 * @s: the string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_puts_recursion(s + 1);
}
