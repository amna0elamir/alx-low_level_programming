#include "main.h"

/**
 * _pow_recursion - fnction that return the value of x to power of y
 * @x: input value
 * @y: input value
 *
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
