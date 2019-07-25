#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - compute simple math operations
 * @argc: number of arguments in argv
 * @argv: arguments containing 2 numbers and operator
 * Return: Success (0), Error (98)
 */
int main(int argc, char *argv[])
{
	int num1, num2, (*fn)(int, int);

	if (argc != 4)
	{
		puts("Error");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		puts("Error");
		return (100);
	}
	fn = get_op_func(argv[2]);
	if (fn == NULL)
	{
		puts("Error");
		return (99);
	}
	printf("%d\n", fn(num1, num2));
	return (0);
}
