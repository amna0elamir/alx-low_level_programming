#include "main.h"
#include <stdio.h>

/**
 * main - a program that print name
 * @argc: arg count
 * @argv: arg vector
 *
 * Result: 0
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
