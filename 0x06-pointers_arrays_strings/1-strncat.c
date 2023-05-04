#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest:z and a
 * @src: z and a
 * @n: integer n value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int z;
	int a;

	z = 0;
	while (dest[z] != '\0')
	{
		z++;
	}
	a = 0;
	while (a < n && src[a] != '\0')
	{
	dest[z] = src[a];
	z++;
	a++;
	}
	dest[z] = '\0';
	return (dest);
}
