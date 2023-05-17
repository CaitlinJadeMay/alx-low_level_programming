#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)

{
	int h = 0;

	int ca = 0;

	while (*(src + h) != '\0')
	{
		h++;
	}
	for ( ; ca < h ; ca +)
	{
		dest[ca] = src[ca];
	}
	dest[h] = '\0';
	return (dest);
}
