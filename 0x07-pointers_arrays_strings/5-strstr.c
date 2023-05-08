#include "main.h"
/**
 * _strstr - Write a function that locates a substring
 * @needle: the first occurrence of the substring needle
 * @haystack: the string
 * Return: Always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c = haystack;
		char *z = needle;

		while (*c == *z && *z != '\0')
		{
			c++;
			z++;
		}

		if (*z == '\0')
			return (haystack);
	}

	return (0);
}
