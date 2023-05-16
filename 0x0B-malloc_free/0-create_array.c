#include "main.h"
#include <stdlib.h>
/**
 * create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to be assigned
 * Description: create array of size size and assign char c
 * Return: Returns a pointer to the array, or NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int cait;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (cait = 0; cait < size; cait++)
		str[cait] = c;
	return (str);
}
