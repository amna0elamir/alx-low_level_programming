#include <stdio.h>

/**
 * main -  prog that prints all the number of arguments passed into it
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char **argv)
{

	while (argc > 0)
	{
		printf("%s\n", argv[argc - 1]);
		argc--;
	}

	return (0);
}
