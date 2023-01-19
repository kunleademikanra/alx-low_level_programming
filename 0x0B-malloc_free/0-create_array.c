#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function that creates an array,
 * and initializes it with a specific character.
 * @size: size of array
 * @c: specific character
 * Return: returns NULL if size = 0 otherwise
 * returns a pointer to the array, or Null if failed.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size <= 0)
		return (NULL);
	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
