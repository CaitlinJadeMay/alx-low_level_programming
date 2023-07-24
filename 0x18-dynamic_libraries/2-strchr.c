#include "main.h"
/**
 * _strchr - Write a function that locates a character in a string
 * @s: the string
 * @c: a pointer to the first occurrence of the character c
 * Return: Always 0 (success)
 */
char *_strchr(char *s, char c)
{
	int y = 0;

	for (; s[y] >= '\0'; y++)
	{
		if (s[y] == c)
			return (&s[y]);
	}
	return (0);
}
