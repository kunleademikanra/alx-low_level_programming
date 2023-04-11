#include "hash_tables.h"

/**
 * Author: Kish Baba
 * Date Created: 11/04/2023
 * Last Modified: 11/04/2023
 *
 * Description
 * A hash function implementing the djb2 algorithm
 *
 * Usage
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
