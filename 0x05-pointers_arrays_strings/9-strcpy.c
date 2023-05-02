#include "main.h"

/**
 * char *_strcpy - Write a function that copies the string pointed to by src,
 * including the terminating null byte to the buffer pointed to by dest
 * @dest: copy to
 * @src: copy from
 * Return: pointed by src, to the buffer pointed to by dest
 */
char *_strcpy(char *dest, char *src)
{
	int c = -1;

	do {
		c++;
		dest[c] = src[c];
	} while (src[c] != '\0');

	return (dest);
}
