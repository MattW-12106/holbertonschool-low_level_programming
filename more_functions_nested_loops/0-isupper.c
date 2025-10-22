#include "main.h"

/**
 * _isupper - Checks to see if a character is uppercase
 * @c: Character being checked
 *
 * Return: On 0 or 1 (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
return (0);
}
