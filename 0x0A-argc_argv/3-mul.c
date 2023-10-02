#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int m1, m2, m;

	if  (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m1 = atoi(argv[1]);
		m2 = atoi(argv[2]);
		m = m1 * m2;
		printf("%d\n", m);
		return (0);
	}
}
