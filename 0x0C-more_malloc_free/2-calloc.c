#include <stdlib.h>
#include "main.h"

/**
 * *_memset - Write a function that allocates
 * memory for an array, using malloc
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int co;

	for (co = 0; co < n; co++)
	{
		s[co] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cait;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cait = malloc(size * nmemb);

	if (cait == NULL)
		return (NULL);

	_memset(cait, 0, nmemb * size);

	return (cait);
}
