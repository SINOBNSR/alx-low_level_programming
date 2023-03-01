#include"main.h"

/**
 * *_strncat - Concatenates two strings using at most
 * an input of bytes from @src
 * @src: the string to be appended to des
 * @dest: the string to be appended upon
 * @n: the number of bytes from src.
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
