#include "main.h"

/**
 * _strchr -  function returns a pointer to the first occurrence
 * of the character c in the string s.
 * @s: source string
 * @c: tested char
 *
 * Return: a pointer to the first occurence of c,
 * if c is not found return NULL.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
