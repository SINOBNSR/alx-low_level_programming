#include"main.h"
/**
 * *_strcat -  concatenates two strings, and appends
 * the src string to the dest string
 * overwriting the terminating null byte (\0) at the
 * end of dest, and then adds a terminating null byte.
 * Description : concatenates two strings.
 *
 * @src: is the source of the string to be appended to dest
 * @dest: a poit to the said string
 * Return : pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
