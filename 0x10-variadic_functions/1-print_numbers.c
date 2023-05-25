#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Write a function that
 * prints numbers, followed by a new line
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list caity;
	unsigned int sh;

	va_start(caity, n);

	for (sh = 0; sh < n; sh++)
	{
		printf("%d", va_arg(caity, int));

		if (sh != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(caity);
}
