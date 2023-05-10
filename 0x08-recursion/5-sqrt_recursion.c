#include "main.h"

int actual_sqrt_recursion(int n, int cait);

/**
 * _sqrt_recursion - Write a function that returns,
 * the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - used to find the natural square root
 * @n: number to calculate the sqaure root of
 * @cait: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int cait)
{
	if (cait * cait > n)
		return (-1);
	if (cait * cait == n)
		return (cait);
	return (actual_sqrt_recursion(n, cait + 1));
}
