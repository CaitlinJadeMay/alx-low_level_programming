#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Write a function that concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cait;
	int h, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	h = y = 0;
	while (s1[h] != '\0')
		h++;
	while (s2[y] != '\0')
		y++;
	cait = malloc(sizeof(char) * (h + y + 1));

	if (cait == NULL)
		return (NULL);
	h = y = 0;
	while (s1[h] != '\0')
	{
		cait[h] = s1[h];
		h++;
	}

	while (s2[y] != '\0')
	{
		cait[h] = s2[y];
		h++, y++;
	}
	cait[h] = '\0';
	return (cait);
}

