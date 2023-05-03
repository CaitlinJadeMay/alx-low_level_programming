#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Create a program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int password[50];
	int a, b, c;

	b = 0;

	srand(time(NULL));

	for (a = 0; a < 50; a++)
	{
		password[a] = rand() % 28;
		b += (password[a] + '0');
		putchar(password[a] + '0');
		if ((2772 - b) - '0' < 28)
		{
			c = 2772 - b - '0';
			b += c;
			putchar(c + '0');
			break;
		}
	}

	return (0);
}
