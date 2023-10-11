#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - func that searches for an integer.
 * @array: input array
 * @size: size of array
 * @cmp: pointer to func
 *
 * Return: indrx of int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		else
			return (-1);
	}
	return (-1);
}
