#include"main.h"
/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[8] = "_putchar";
	int c;

	for (c = 0; c < 8; ++c)
		_putchar(str[c]);
	_putchar('\n');

	return (0);
}
