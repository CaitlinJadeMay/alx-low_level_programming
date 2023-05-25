#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Write a function that prints strings, followed by a new line
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 * @...: A variable number of strings to be printed
 *
 * Description: If separator is NULL, it is not printed
 * If one of the strings if NULL, (nil) is printed instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list shau;
	char *str;
	unsigned int cait;

	va_start(shau, n);

	for (cait = 0; cait < n; cait++)
	{
		str = va_arg(shau, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (cait != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(shau);
}
