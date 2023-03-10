#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplies two numbers.
 * @argc: Number of arguments
 * @argv: Array of pointers to the said arguments
 *
 * Return: 0 if the program recieve two arguments, otherwise 1
 */

int main(int argc, char *argv[])
{
	int i, n, rslt;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		n = atoi(argv[2]);
		rslt = i * n;
		printf("%d\n", rslt);
	}
	return (0);
}


