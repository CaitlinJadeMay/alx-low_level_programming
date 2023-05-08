#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Write a function that prints the sum of the,
 * two diagonals of a square matrix of integers
 * @a: input
 * @size: input
 * Return: Always 0 (success)
 */
void print_diagsums(int *a, int size)
{
	int cait, shau, ki;

	cait = 0;
	shau = 0;

	for (ki = 0; ki < size; ki++)
	{
		cait = cait + a[ki * size + ki];
	}

	for (ki = size - 1; ki >= 0; ki--)
	{
		shau += a[ki * size + (size - ki - 1)];
	}

	printf("%d, %d\n", cait, shau);
}
