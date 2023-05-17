#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int cait;

	for (cait = 0; cait < argc; cait++)
	{
		printf("%s\n", argv[cait]);
	}
	return (0);
}
