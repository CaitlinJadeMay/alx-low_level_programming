#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)

{
	int cai;

	while (*s)
	{
		for (cai = 0; accept[cai]; cai++)
		{
			if (*s == accept[cai])
				return (s);
		}
		s++;
	}
	return ('\0');
}
