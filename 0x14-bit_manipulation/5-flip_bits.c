#include "main.h"
/**
 * flip_bits - A function that gets number of bits needed to flip
 * @n: How many bit flips
 * @m: The number to set other equal
 * Return: The number of fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;

	n = n ^ m;
	while (n)
	{
		i += n & 1;
		n >>= 1;
	}
	return (i);
}
