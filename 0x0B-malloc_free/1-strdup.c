#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - unction returns a pointer to a new string
 * which is a duplicate of the string str.
 * @str: string to be duplicated
 * Return: returns NULL if str is Null or
 * returns pointer to the duplicated string and
 * Null if memory is insufficient.
 */
char *_strdup(char *str)
{
	char *da;
	int i;
	int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[j] != '\0')
	{
		j++;
	}

	da = malloc(sizeof(char) * j + 1);

	if (da == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		da[i] = str[i];
	}
	return (da);
}
