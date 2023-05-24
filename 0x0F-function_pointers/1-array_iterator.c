#include "function_pointers.h"

#include <stdio.h>

/**
 * array_iterator - Write a function that executes a function
 * given as a parameter on each element of an array
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: function given as parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{

	unsigned int cait;


	if (array == NULL || action == NULL)

		return;


	for (cait = 0; cait < size; cait++)

	{

		action(array[cait]);

	}
}
