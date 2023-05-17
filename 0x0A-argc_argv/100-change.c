#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Write a program that prints the minimum number of,
 * coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int cait, shau, sum;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cait = atoi(argv[1]);
	sum = 0;

	if (sum < 0)
	{
		printf("0\n");
		return (0);
	}

	for (shau = 0; shau < 5 && cait >= 0; shau++)
	{
		while (cait >= coins[shau])
		{
			sum++;
			cait -= coins[shau];
		}
	}

	printf("%d\n", sum);
	return (0);
}
