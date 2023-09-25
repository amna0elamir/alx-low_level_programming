#include "main.h"
/**
 * _memset - function to set memory
 * @s: input char
 * @b: input to fill with
 * @n: input value
 *
 * Return: pointer 
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
