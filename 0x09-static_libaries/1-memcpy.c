#include "main.h"

/**
 * _memcpy - function to cp
 * @dest: copy there
 * @src: copy from
 * @n: input value
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}

	return (p);
}
