#include "main.h"

/**
*_puts - Write a function that prints a string,
*followed by a new line, to stdout
*@str: pointer to the string
*Return: String followed by a new line
*/
void _puts(char *str)
{
int index;

for (index = 0; str[index] != '\0'; index++)
{
_putchar(str[index]);
}
_putchar('\n');
}
