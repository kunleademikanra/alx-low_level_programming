#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checks memory allocated
 * @b: integer to check
 * Return: returns a pointer to the memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);
	return (t);
}
