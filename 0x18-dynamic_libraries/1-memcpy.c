#include "main.h"
/**
 *_memcpy - Write a function that copies memory area
 *@dest: storage for memory
 *@src: bytes from memory area
 *@n: function copies bytes
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c = 0;
	int s = n;

	for (; c < s; c++)
	{
		dest[c] = src[c];
		n--;
	}
	return (dest);
}
