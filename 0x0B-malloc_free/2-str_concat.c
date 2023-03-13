#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - a function that concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: a pointer to newlly allocated space in memory,
 * in case of failure, return NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_strn;
	int i, concat_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	concat_strn = malloc(sizeof(char) * len);

	if (concat_strn == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_strn[concat_index++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_strn[concat_index++] = s2[i];

	return (concat_strn);
}
