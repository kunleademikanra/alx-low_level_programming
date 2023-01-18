#include "main.h"
#include <stdlib.h>

/**
 * array_range - get len, malloc * len
 * loop size of len to insert min++ into new arr
 * @min: min input
 * @max: max input
 * Return: pointer to new arr of ints
 */
int *array_range(int min, int max)
{
	int *da;
	int b;
	int len;

	if (min > max)
		return (NULL);

	for (len = 0; len < (max - min); len++)
		;

	da = malloc(sizeof(int) * (len + 1));
	if (da == NULL)
		return (NULL);

	for (b = 0; b <= len; b++)
	{
		da[b] = min++;
	}

	return (da);
}
