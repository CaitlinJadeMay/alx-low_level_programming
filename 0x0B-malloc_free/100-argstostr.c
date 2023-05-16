#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Write a function that concatenates
 * all the arguments of your program
 * @ac: int input
 * @av: double pointer array
 * Return: 0 (success)
 */
char *argstostr(int ac, char **av)
{
	int a, b, cd = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		str[cd] = av[a][b];
		cd++;
	}
	if (str[cd] == '\0')
	{
		str[cd++] = '\n';
	}
	}
	return (str);
}
