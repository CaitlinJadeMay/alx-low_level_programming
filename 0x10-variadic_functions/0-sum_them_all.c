#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Write a function that
 * returns the sum of all its parameters
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sh;
	unsigned int cait, sum = 0;

	va_start(sh, n);

	for (cait = 0; cait < n; cait++)
		sum += va_arg(sh, int);

	va_end(sh);

	return (sum);
}
