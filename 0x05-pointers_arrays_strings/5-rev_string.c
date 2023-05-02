#include "main.h"

/**
 * rev_string - Write a function that reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int beginning = 0;
	int i;

	while (s[beginning] != '\0')
	beginning++;
	for (i = 0; i < beginning; i++)
	{
		beginning--;
		rev = s[i];
		s[i] = s[beginning];
		s[beginning] = rev;
	}
}
