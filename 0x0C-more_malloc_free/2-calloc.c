#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - func that allocates memory for an array
 * @nmemb:input num
 * @size: input size
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (; i < nmemb * size ; i++)
		*(ptr + i) = 0;
	return (ptr);
}
