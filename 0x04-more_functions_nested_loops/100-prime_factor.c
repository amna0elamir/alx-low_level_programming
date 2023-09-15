#include <stdio.h>

/**
 * main - prints largest prime factor.
 * @n: number to to calc prime factors
 * @fp: number used for the loop
 * Return: Always 0.
 */

int main(void)
{
	long int n, fp;

	n = 612852475143;
	for (fp = 2; fp <= n; fp++)
	{
		if (n % fp == 0)
		{
			n /= fp;
			fp--;
		}
	}
	printf("%ld\n", fp);
	return (0);
}
