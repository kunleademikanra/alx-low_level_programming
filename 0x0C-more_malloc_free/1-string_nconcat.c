#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes number
 * Return: returns NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *da;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int l;
	unsigned int a;
	unsigned int k = 0;
	unsigned int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
		j = n;

	len = i + j;

	da = malloc(sizeof(char) * (len + 1));
	if (da == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
		da[k++] = s1[a];
	for (l = 0; l < j; l++)
		da[k++] = s2[l];

	da[k] = '\0';
	return (da);
}
