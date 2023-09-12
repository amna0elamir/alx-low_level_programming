#include"main.h"

/**
 * print_alphabet_x10 - function to  print the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int r,c;

	for (r= 0; r<= 9; r++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
