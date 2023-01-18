#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: the number of elements
 * @size: the size of that element type
 *
 * Return: A pointer to the allocated memeory. NULL if nmemb or size is 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *da;
	unsigned int b;

	if (size == 0 || nmemb == 0)
		return (NULL);

	da = malloc(size * nmemb);
	if (da == NULL)
		return (NULL);

	for (b = 0; b < (size * nmemb); b++)
		da[b] = 0;

	return (da);
}
