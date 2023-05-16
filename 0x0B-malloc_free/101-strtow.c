#include <stdlib.h>
#include "main.h"

/**
 * count_word - Write a function that splits a string into words
 * @s: string
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int cait, c, h;

	cait = 0;
	h = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			cait = 0;
		else if (cait == 0)
		{
			cait = 1;
			h++;
		}
	}

	return (h);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **sher, *shau;
	int u, v = 0, x = 0, words, c = 0, start, end;

	while (*(str + x))
		x++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	sher = (char **) malloc(sizeof(char *) * (words + 1));
	if (sher == NULL)
		return (NULL);

	for (u = 0; u <= x; u++)
	{
		if (str[u] == ' ' || str[u] == '\0')
		{
			if (c)
			{
				end = u;
				shau = (char *) malloc(sizeof(char) * (c + 1));
				if (shau == NULL)
					return (NULL);
				while (start < end)
					*shau++ = str[start++];
				*shau = '\0';
				sher[v] = shau - c;
				v++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = u;
	}

	sher[v] = NULL;

	return (sher);
}
