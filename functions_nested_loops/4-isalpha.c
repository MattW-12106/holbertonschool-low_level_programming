#include "main.h"

/**
 * _isalpha - used to determine whether or not a character is an alphabetic character
 * @c: variable to be checked
 *
 * Return: On 0 or 1
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
