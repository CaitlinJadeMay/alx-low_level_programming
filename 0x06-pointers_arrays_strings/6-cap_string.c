#include "main.h"

/**
 * cap_string - Write a function that,
 * capitalizes all words of a string
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int beginning = 0;

	while (str[beginning])
	{
		while (!(str[beginning] >= 'a' && str[beginning] <= 'z'))
			beginning++;

		if (str[beginning - 1] == ' ' ||
		    str[beginning - 1] == '\t' ||
		    str[beginning - 1] == '\n' ||
		    str[beginning - 1] == ',' ||
		    str[beginning - 1] == ';' ||
		    str[beginning - 1] == '.' ||
		    str[beginning - 1] == '!' ||
		    str[beginning - 1] == '?' ||
		    str[beginning - 1] == '"' ||
		    str[beginning - 1] == '(' ||
		    str[beginning - 1] == ')' ||
		    str[beginning - 1] == '{' ||
		    str[beginning - 1] == '}' ||
		    beginning == 0)
			str[beginning] -= 32;

		beginning++;
	}

	return (str);
}

