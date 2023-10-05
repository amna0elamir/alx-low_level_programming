#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - func that returns a pointer to 2D array
 * @width: input column
 * @height: input row
 * Return: pointer to a 2D array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (width <= 0 || height <= 0)
	return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(array[i]);

			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
