#include "main.h"
int try_sqrt(int n1, int n2);

/**
 *_sqrt_recursion - It returns the value of square root of n.
 * @n: an input integer
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (try_sqrt(1, n));
}

/**
 * try_sqrt - find square root
 * @n1: input value
 * @n2: number to calc root value
 * Return: the square root
 */
int try_sqrt(int n1, int n2)
{
	if (n1 > n2)
		return (-1);
	else if (n1 * n1 == n2)
		return (n1);
	return (try_sqrt(n1 + 1, n2));
}
