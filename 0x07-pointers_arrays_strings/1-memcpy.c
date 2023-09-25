#include "main.h"

/**
 * _memcpy - function to cp 
 * @dest: copy there
 * @src: copy from
 * @n: input value
 *
 * Return: nothing
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
