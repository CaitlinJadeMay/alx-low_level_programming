#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: strin
 * Return: length
 */

int _strlen(char *s)

{
	int cait = 0;

	while (*s != '\0')

	{
		cait++;

		s++;
	}
	return (cait);
}
