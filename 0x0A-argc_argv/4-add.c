#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: Number of arguments
 * @argv: Array of pointers to the said arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n, digit, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (digit = 0; argv[n][digit]; digit++)
		{
			if (argv[n][digit] < '0' || argv[n][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[n]);
	}

	printf("%d\n", sum);

	return (0);
}
