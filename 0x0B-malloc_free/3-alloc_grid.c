#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: returns NULL on failure and
 * NULL when width or height is negative
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int a;
	int b;
	int c;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		array[a] = malloc(sizeof(int) * width);
		if (array[a] == NULL)
		{
			while (a >= 0)
			{
				free(array[a]);
				a--;
			}
			free(array);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
			array[b][c] = 0;
	}
	return (array);
}
