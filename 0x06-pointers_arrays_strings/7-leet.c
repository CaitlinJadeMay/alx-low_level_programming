#include "main.h"
/**
 * leet - Write a function that,
 * encodes a string into 1337
 * * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int a, c;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (c = 0; c < 10; c++)
		{
			if (n[a] == s1[c])
			{
				n[a] = s2[c];
			}
		}
	}
	return (n);
}
