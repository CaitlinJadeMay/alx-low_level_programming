#include "main.h"

/**
 * _atoi - Write a function that convert a string to an integer
 * @s: string that will be cinverted to an integer
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int c, x, y, z, a, b;

	c = 0;
	x = 0;
	y = 0;
	z = 0;
	a = 0;
	b = 0;

	while (s[z] != '\0')
		z++;

	while (c < z && a == 0)
	{
		if (s[c] == '-')
			++x;

		if (s[c] >= '0' && s[c] <= '9')
		{
			b = s[c] - '0';
			if (x % 2)
				b = -b;
			y = y * 10 + b;
			a = 1;
			if (s[c + 1] < '0' || s[c + 1] > '9')
				break;
			a = 0;
		}
		c++;
	}

	if (a == 0)
		return (0);

	return (y);
}
