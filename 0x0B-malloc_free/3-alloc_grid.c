#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Write a function that returns
 * a pointer to a 2 dimensional array of integers
 * @width: input
 * @height: input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **cait;
	int s, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	cait = malloc(sizeof(int *) * height);

	if (cait == NULL)
		return (NULL);

	for (s = 0; s < height; s++)
	{
		cait[s] = malloc(sizeof(int) * width);

		if (cait[s] == NULL)
		{
			for (; s >= 0; s--)
				free(cait[s]);

			free(cait);
			return (NULL);
		}
	}

	for (s = 0; s < height; s++)
	{
		for (h = 0; h < width; h++)
			cait[s][h] = 0;
	}

	return (cait);
}
