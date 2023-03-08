#include "main.h"

/**
 * _print_rev_recursion - a function that prints in reverse
 * @s: String that will be printed in reverse
 */


void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
