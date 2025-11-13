#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: argument count
 * @argv: array of char pointers
 *
 * Return: 1 on fail, 0 on success
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op)(int, int);

	if (argc != 4)
	{
		return (1);
	}

	num1 = atoi(argv[2]);
	num2 = atoi(argv[3]);

	op = get_op_func(argv[1]);

	if (op == NULL)
	{
		return (1);
	}

	result = op(num1, num2);
	printf("%d\n", result);

	return (0);
}
