#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - func that allocates mem using malloc
 * @b:input byte
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
