#include <stddef.h>
#include <function_pointers.h>
#include <stdlib.h>
/**
 * array_iterator - function that executes a function as param of array
 * @array: input array
 * @size: input size
 * @action: pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}


