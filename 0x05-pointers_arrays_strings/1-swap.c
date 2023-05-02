#include "main.h"

/**
 *1-swap: Write a function that swaps the values of two integers
 *@a: swap integer with b
 *@b: swap integer with a
 *Return: (0) success
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
