#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - sum of two integers
 * op_sub - difference of two integers
 * op_mul - multiplication of two integers
 * op_div - division of two integers
 * op_mod - modulation of two integers
 *
 * @a: integer a
 * @b: integer b
 *
 * Return: operator of a and b
 */

int op_add(int a, int b)
{
	return(a + b);
}

int op_sub(int a, int b)
{
	return(a - b);
}

int op_mul(int a, int b)
{
	return(a * b);
}

int op_div(int a, int b)
{
	return(a / b);
}

int op_mod(int a, int b)
{
	return(a % b);
}

