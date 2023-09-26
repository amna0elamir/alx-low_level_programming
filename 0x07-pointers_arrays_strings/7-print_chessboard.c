#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - a function that prints a chessboard
 * @a: an array input
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		i++;
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
