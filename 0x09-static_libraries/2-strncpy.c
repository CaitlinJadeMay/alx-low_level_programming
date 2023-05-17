#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int sh;

	sh = 0;

	while (sh < n && src[sh] != '\0')
	{
		dest[sh] = src[sh];
		sh++;
	}
	while (sh < n)
	{
		dest[sh] = '\0';

		sh++;
	}
	return (dest);
}
