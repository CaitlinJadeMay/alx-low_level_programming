#include "main.h"

/**
 *print_rev - Write a function that prints a string,
 *in reverse, followed by a new line
 *@s: String pointer
 *Return: In reverse
 */
void print_rev(char *s)
{
	int beginning = 0;
	int o;

	while (*s != '\0')
	{
		beginning++;
		s++;
	}
	s--;
	for (o = beginning; o > 0; o--)
	{
		putchar(*s);
		s--;
	}

	putchar('\n');
}
