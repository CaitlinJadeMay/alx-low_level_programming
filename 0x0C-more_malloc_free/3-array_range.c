#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Write a function that creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *cait;
	int sh, yu;

	if (min > max)
		return (NULL);

	yu = max - min + 1;

	cait = malloc(sizeof(int) * yu);

	if (cait == NULL)
		return (NULL);

	for (sh = 0; min <= max; sh++)
		cait[sh] = min++;

	return (cait);
}
