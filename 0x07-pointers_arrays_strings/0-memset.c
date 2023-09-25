#include "main.h"
/**
 * _memset - function to set memory
 * @s: input char
 * @i: input int
 * @n: input value
 *
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	
	Return(s);
}
