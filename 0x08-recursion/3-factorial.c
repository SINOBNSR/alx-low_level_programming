#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: The number to find the factorial for
 *
 * Return: if n > 0 - the factorial of n
 *         if n < 0 - 1 error.
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result = result * factorial(n - 1);

	return (result);
}
