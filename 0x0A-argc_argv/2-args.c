#include <stdio.h>
#include "main.h"
/**
 * main - prints all the arguments passed into it.
 * @argc: Number of arguments
 * @argv: Array of pointers to the said arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
