#include "main.h"
/**
 * _strspn - Write a function that gets the length of a prefix substring
 * @s: the number of bytes in the initial segment of s
 * @accept:consist only of bytes from accept
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int y = 0;
	int z;

	while (*s)
	{
		for (z = 0; accept[z]; z++)
		{
			if (*s == accept[z])
			{
				y++;
				break;
			}
			else if (accept[z + 1] == '\0')
				return (y);
		}
		s++;
	}
	return (y);
}
