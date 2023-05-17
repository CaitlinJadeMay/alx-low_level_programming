#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[cait] - s2[cait]
 */

int _strcmp(char *s1, char *s2)

{
	int cait;

	cait = 0;

	while (s1[cait] != '\0' && s2[cait] != '\0')
	{
		if (s1[cait] != s2[cait])
		{
			return (s1[cait] - s2[cait]);
		}
		cait++;
	}
	return (0);
}
