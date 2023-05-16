#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Write a function that returns a pointer to a newly,
 * allocated space in memory, which contains a copy of,
 * the string given as a parameter
 * @str: char
 * Return: 0 (success)
 */
char *_strdup(char *str)
{
	char *cait;
	int s, h = 0;

	if (str == NULL)
		return (NULL);
	s = 0;
	while (str[s] != '\0')
		s++;

	cait = malloc(sizeof(char) * (s + 1));

	if (cait == NULL)
		return (NULL);

	for (h = 0; str[h]; h++)
		cait[h] = str[h];

	return (cait);
}
