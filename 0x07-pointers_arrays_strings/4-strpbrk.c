#include "main.h"

/**
 * _strpbrk -  function locates the first occurrence in the string
 * s of any of the bytes in the string accept.
 * @s: string
 * @accept: the bytes to be searched for.
 * Return: a pointer to the matched bytes, or else -NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
