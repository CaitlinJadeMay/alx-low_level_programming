#include <stdio.h>
#include "main.h"

/**
 * _atoi - Write a program that multiplies two numbers
 * @s: string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int c, si, x, y, z, cait;

	c = 0;
	si = 0;
	x = 0;
	y = 0;
	z = 0;
	cait = 0;

	while (s[y] != '\0')
		y++;

	while (c < y && z == 0)
	{
		if (s[c] == '-')
			++si;

		if (s[c] >= '0' && s[c] <= '9')
		{
			cait = s[c] - '0';
			if (si % 2)
				cait = -cait;
			x = x * 10 + cait;
			z = 1;
			if (s[c + 1] < '0' || s[c + 1] > '9')
				break;
			z = 0;
		}
		c++;
	}

	if (z == 0)
		return (0);

	return (x);
}

/**
 * main - multiplies the two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int shaun, one, two;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	one = _atoi(argv[1]);
	two = _atoi(argv[2]);
	shaun = one * two;

	printf("%d\n", shaun);

	return (0);
}
