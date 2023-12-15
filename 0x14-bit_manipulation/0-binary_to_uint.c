#include "main.h"

/**
 * binary_to_uint - A finction that converts binary number
 * to an unsigned integer
 * @b: A pointer
 * Return: unsigned integer converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, result = 0, i = 0;

	if (!b)
		return (0);
	while (*(b + i))
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
		i++;
	}
	for (i--; i >= 0; i--)
	{
		if (*(b + i) == '1')
			result = result + base;
		base = base * 2;
	}
	return (result);
}
