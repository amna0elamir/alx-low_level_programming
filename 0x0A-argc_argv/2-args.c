#include <stdio.h>

/**
 * main -  prog that prints all the number of arguments passed into it
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char **argv)
{

	while (argc--)

		printf("%s\n", *argv++);
	return (0);
}
