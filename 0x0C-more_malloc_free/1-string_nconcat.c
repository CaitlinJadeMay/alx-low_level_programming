#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *s;

	unsigned int ca = 0, h = 0, xi = 0, y = 0;

	while (s1 && s1[xi])
		xi++;
	while (s2 && s2[y])
		y++;
	if (n < y)
		s = malloc(sizeof(char) * (xi + n + 1));
	else
		s = malloc(sizeof(char) * (xi + y + 1));
	if (!s)
		return (NULL);
	while (ca < xi)
	{
		s[ca] = s1[ca];
		ca++;
	}
	while (n < y && ca < (xi + n))
		s[ca++] = s2[h++];
	while (n >= y && ca < (xi + y))
		s[ca++] = s2[h++];
	s[ca] = '\0';
	return (s);
}
