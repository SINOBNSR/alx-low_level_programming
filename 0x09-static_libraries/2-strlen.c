#include"main.h"

/**
 * _strlen - retuns the length of a string
 * @s: string
 * Description : returns the length of a string.
 * Return: integer
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
