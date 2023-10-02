#include <stdio.h>

/**
 * main - that prints the number of arguments passed into it.
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
