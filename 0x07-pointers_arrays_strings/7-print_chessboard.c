#include "main.h"
/**
 * print_chessboard - Write a function that prints the chessboard
 * @a: array
 * Return: Always 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int cait;
	int z;

	for (cait = 0; cait < 8; cait++)
	{
		for (z = 0; z < 8; z++)
			_putchar(a[cait][z]);
		_putchar('\n');
	}
}
