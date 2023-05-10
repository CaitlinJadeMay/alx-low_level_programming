#include "main.h"
/**
 * _strlen_recursion - Write a function that returns,
 * the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int cait = 0;

	if (*s)
	{
		cait++;
		cait += _strlen_recursion(s + 1);
	}

	return (cait);
}
