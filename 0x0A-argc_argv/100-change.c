#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * CoinConverter - Helper function that calculates the conversions
 * @i: a variable passed from main
 * Return: The minimum of coins needed for the variable
 */

int CoinConverter(int i)
{
	int count = 0;

	while (i != 0)
	{
		if (i % 10 == 9 || i % 10 == 7)
			i = i - 2;
		else if (i >= 25)
			i = i - 25;
		else if (i >= 10)
			i = i - 10;
		else if (i >= 5)
			i = i - 5;
		else if (i >= 2)
		{
			if (i % 10 == 6)
				i = i - 1;
			else
				i = i - 2;
		}
		else
			i = i - 1;

		count++;
	}

	return (count);
}

/**
 * main -  Takes one argument for minimum coint count
 * @argc: Number of arguments
 * @argv: Array of pointers to the said arguments
 * Return: 0 if exactly 1 argument is passed into the program, otherwise 1
 */

int main(int argc, char *argv[])
{
	int i, coin;

	coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	if (i < 0)
		printf("0\n");
	else
	{
		coin = CoinConverter(i);

		printf("%d\n", coin);
	}

	return (0);
}
