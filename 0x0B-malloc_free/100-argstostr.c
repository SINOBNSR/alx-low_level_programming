#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - a function that concatenates all the arguments
 * @ac: number of arguments
 * @av: the arguments
 * Return:  pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str = NULL;

	k = 0;
	len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}

	str = (char *)malloc(len + ac +  1 * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}

