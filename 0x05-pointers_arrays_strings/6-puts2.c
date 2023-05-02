#include "main.h"

/**
 *puts2 - Write a function that prints every other character of a string,
 *starting with the first character, followed by a new line
 *@str: input
 *Return: prints every other character of a string
 */
void puts2(char *str)
{
	int beginning = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		beginning++;
	}
	t = beginning - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		putchar(str[o]);
	}
	}
	putchar('\n');
}
