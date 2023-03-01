#include"main.h"

/**
 * *leet - encodes a string into 1337
 * @str: The string that will be encoded
 * Return: String encoded to 1337
 */
char *leet(char *str)
{
	int inde1 = 0, inde2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[inde1])
	{
		for (inde2 = 0; inde2 <= 7; inde2++)
		{
			if (str[inde1] == leet[inde2] ||
				str[inde1] - 32 == leet[inde2])
				str[inde1] = inde2 + '0';
		}
		inde1++;
	}
	return (str);
}

