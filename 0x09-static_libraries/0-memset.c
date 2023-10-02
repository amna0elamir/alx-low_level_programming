#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: input char
 * @b: input to fill with
 * @n: int value of byte
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (p);
}
