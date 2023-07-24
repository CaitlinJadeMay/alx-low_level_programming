#include "main.h"
/**
 * _strpbrk - Write a function that searches a string for any of a set of bytes
 * @s: the first occurrence in the string s
 * @accept: bytes in the string accept
 * Return: Always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
		int c;

		while (*s)
		{
			for (c = 0; accept[c]; c++)
			{
			if (*s == accept[c])
			return (s);
			}
		s++;
		}

	return ('\0');
}
