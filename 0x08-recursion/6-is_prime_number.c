#include "main.h"


int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible.
 * @x: input number to be checked
 * @div: The divisor.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int is_divisible(int x, int div)
{
	if (x % div == 0)
		return (0);

	if (div == x / 2)
		return (1);

	return (is_divisible(x, div + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: input number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
