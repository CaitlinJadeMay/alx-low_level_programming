#include "main.h"

/**
 *_strlen - Write a function that returns the length of a string
 *@s: String
 *
 *Return: The length of the string
 */
int _strlen(char *s)
{
	int strlen = 0;

	while (s[strlen])
		strlen++;
	return (strlen);
}
