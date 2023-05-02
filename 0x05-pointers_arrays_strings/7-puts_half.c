#include "main.h"

/**
 *puts_half - Write a function that prints half of a string,
 *followed by a new line
 *@str: input
 *Return: half of the string
 */
void puts_half(char *str)
{
	int a, b, half;

	half = 0;

	for (a = 0; str[a] != '\0'; a++)
		half++;

	b = (half / 2);

	if ((half % 2) == 1)
		b = ((half + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		putchar(str[a]);
	putchar('\n');
}
