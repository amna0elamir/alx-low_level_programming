#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - func that creates an array of integers
 * @min: input num
 * @max:input num
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i = 0, range;
	int *create;

	if (min > max)
		return (NULL);
	range = max - min;
	create = malloc((range + 1) * (sizeof(int)));
	if (create == NULL)
		return (NULL);
	for (; i <= range ; i++)
		create[i] = min++;
	return (create);
}
