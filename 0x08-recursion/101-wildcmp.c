#include "main.h"


int wildcmp(char *s1, char *s2);
int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);

/**
 * strlen_no_wilds - Retuns length of a string, while
 * ignoring wildcards.
 * @str: the string to be measured.
 *
 * Return: length
 */

int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			len++;
		index++;
		len = len + strlen_no_wilds(str + index);
	}
	return (len);
}

/**
 * iterate_wild - iterates through a string in a wildcard
 * until it points to a non-wildcard.
 *
 * @wildstr: the string to iterate through.
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * postfix_match - checks if a string matches the postfix of another
 * string that might have a wildcard.
 * @str: the string to be matched
 * @postfix: the postfix
 *
 * Return: a pointer to the null byte located in the end of the postifx
 * otherwise a pointer to the first unmatched character in postfix
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);
	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}
	return (postfix);
}

/**
 * wildcmp - comapres two strings, including wildcards
 * @s1: first string
 * @s2: second string
 *
 * Return: if the strings are identical - 1.
 * otherwise - 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}
	if (*s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	return (wildcmp(++s1, ++s2));
}
