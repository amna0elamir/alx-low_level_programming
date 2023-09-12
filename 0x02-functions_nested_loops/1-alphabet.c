#include"main.h"
/**
 * print_alphabet - entry point
 *
 * Description: This function prints the alphabet, in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; ++c)
		_putchar(c);
	_putchar('\n');
}
