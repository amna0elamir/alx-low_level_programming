#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int h;
	char x;

	for (h = 0 ; h <= 9 ; h++)
		putchar(h);
	for (x = 'a'; x <= 'f' ; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
