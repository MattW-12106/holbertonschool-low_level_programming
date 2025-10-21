#include "main.h"

/**
 * _islower - a function that checks for lowercase letters
 *
 * @c: is a letter
 *
 * Return: On 0 or 1
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
