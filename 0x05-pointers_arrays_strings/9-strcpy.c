#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed
 * to by dest.
 *
 * @dest: destination of the string
 * @src: source of the string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src);
{
	int i = 0;

	while (src[i])
	{
		dest[i] = scr[i];
		i++;
	}
	return (dest);
}
