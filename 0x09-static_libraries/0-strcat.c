#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)

{
	int c;
	int s;

	c = 0;

	while (dest[c] != '\0')

	{

		c++;

	}

	s = 0;

	while (src[s] != '\0')

	{

		dest[c] = src[s];

		c++;

		s++;

	}

	dest[c] = '\0';

	return (dest);
}
