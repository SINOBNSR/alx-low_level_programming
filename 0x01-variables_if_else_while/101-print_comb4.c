#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints a combination of 3 numbers
 * under certain conditions
 * Return: Always (Success)
 */
int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if (a < b && b < c)
				{
					putchar (a);
					putchar (b);
					putchar (c);
					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
