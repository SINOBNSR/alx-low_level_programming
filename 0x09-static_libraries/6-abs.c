#include "main.h"
/**
 * _abs - Entry point
 * Description: prints the absolute value of
 * an integer
 * @x: is an integer
 * Return: int
 */

int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}
