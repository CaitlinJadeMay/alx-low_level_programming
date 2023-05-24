#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))

{

	int shau;


	if (array == NULL || size <= 0 || cmp == NULL)

		return (-1);


	for (shau = 0; shau < size; shau++)

	{

		if (cmp(array[shau]))

			return (shau);

	}

	return (-1);

}
