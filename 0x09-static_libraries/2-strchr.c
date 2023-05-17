#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)

{
	int xx = 0;

	for (; s[xx] >= '\0'; xx++)

	{

		if (s[xx] == c)
			return (&s[xx]);

	}
	return (0);
}
