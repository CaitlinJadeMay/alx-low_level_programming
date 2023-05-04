#include "main.h"
/**
 * string_toupper - Write a function that changes all,
 * lowercase letters of a string to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int begin;

	begin = 0;
	while (n[begin] != '\0')
	{
		if (n[begin] >= 'a' && n[begin] <= 'z')
			n[begin] = n[begin] - 32;
		begin++;
	}
	return (n);
}
