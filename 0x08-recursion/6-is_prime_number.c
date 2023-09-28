#include "main.h"
int is_prime_rec(int num, int i);

/**
 * is_prime_rec - function to check for factors
 * @num: input number
 * @i: input to use for check
 *
 * Return : 1 or 0
 */
int is_prime_rec(int num, int i)
{
	if (num <= 1)
		return (0);
	else if (i * i > num)
		return (1);
	else if (num % i == 0)
		return (0);
	return (is_prime_rec(num, i + 1));
}

/**
 * is_prime_number - function to check prime
 * @n: input number
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (is_prime_rec(n, 2));
}

