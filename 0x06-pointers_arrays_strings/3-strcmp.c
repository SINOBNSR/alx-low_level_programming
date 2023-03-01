#include "main.h"
/**
 * _strcmp -  compares two strings. similar to the strcmp
 * of the standard library.
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 * Return: if s1 < s2, the negative difference of
 * the first unmatched charcters.
 * if s1 == s2, return 0
 * if s1 > s2, the positive difference of the first unmatched caracters.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
