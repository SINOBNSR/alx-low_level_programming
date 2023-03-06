#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack.  The terminating
 * null bytes ('\0') are not compared.
 * @haystack: the string to be searched
 * @needle: a substring
 * Return:  a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[indx] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;
			} while (haystack[index] == neddle[index]);
		}
		haystack++;
	}
	return ('\0');
}
