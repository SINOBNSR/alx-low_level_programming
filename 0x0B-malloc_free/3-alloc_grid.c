#include <stdlib.h>
#include "main.h"


/**
 * *alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: the width of the array.
 * @height: the height of the array.
 * Return: a pointer to a 2 dimenstional array of integers or NULL.
 */

int **alloc_grid(int width, int height)
{
	int **tdarr;
	int hi, wi;

	if (width <= 0 || height <= 0)
		return (NULL);

	tdarr = malloc(sizeof(int *) * height);

	if (tdarr == NULL)
		return (NULL);

	for (hi = 0; hi < height; hi++)
	{
		tdarr[hi] = malloc(sizeof(int) * width);
		if (tdarr[hi] == NULL)
		{
		for (; hi >= 0; hi--)
			free(tdarr[hi]);
		free(tdarr);
		return (NULL);
		}
	}

	for (hi = 0; hi < height; hi++)
	{
		for (wi = 0; wi < width; wi++)
			tdarr[hi][wi] = 0;
	}

	return (tdarr);
}
