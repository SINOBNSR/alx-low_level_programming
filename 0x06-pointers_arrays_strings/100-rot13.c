#include "main.h"
/**
 * *rot - Encodes a string using rot13.
 * @str: the string subject of encoding
 * Return: encoded string
 */
char *rot(char *str)
{
	int inde1 = 0, inde2;
	char aplphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
		'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd',
		'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z'};
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
		'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A',
		'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q',
		'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
		'h', 'i', 'j', 'k', 'l', 'm'};

	while (str[inde1])
	{
		for (inde2 = 0; inde2 < 52; inde2++)
		{
			if (str[inde1] == alphabet[inde2])
			{
				str[inde1] = rotl3key[inde2];
				break;
			}
		}
	}
	return (str);
}
