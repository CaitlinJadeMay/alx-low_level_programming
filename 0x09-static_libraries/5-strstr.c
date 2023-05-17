#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{

		char *s = haystack;

		char *f = needle;

		while (*s == *f && *f != '\0')
		{
			s++;
			f++;
		}
		if (*f == '\0')
			return (haystack);
	}
	return (0);
}
