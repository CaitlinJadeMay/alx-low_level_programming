#include "main.h"
/**
 * _memset - Write a function that fills memory with a constant byte
 * @s: memory area pointed to
 * @b: constant byte
 * @n: function fills the first bytes
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int c = 0;

	for (; n > 0; c++)
	{
		s[c] = b;
		n--;
	}
	return (s);
}
