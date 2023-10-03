#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -  that adds positive numbers.
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int n, i;
	int sum = 0;

	while (argc-- > 1)
	{	
		for (i = 1; i < argc; i++)
		{
			char *arg = argv[i];
			int j = 0;

			if (!isdigit(arg[j]))
			{
			printf("Error\n");
			return (1);
			}

			j++;
		}
		n = atoi(argv[argc]);
		if (n > 0)
		{
		sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
